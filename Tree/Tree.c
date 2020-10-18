//
// Created by 최가은 on 2020/10/15.
//

#include <stdio.h>
#include "Tree.h"

void init(Tree* t){
    t->root = NULL;
    t->cnt = 0;
}

void insert(Tree *t, int key, element data){
    // 맨 처음 Tree에 넣을때 비어있는지 if문으로 체크
    if(t->root == NULL) t->root = createNode(key, data);
    // 이미 Tree가 생성되어 있다면 Node 삽입
    else insert_Node(t->root, createNode(key, data));

    // Node 수 증가
    t->cnt++;
}

void delete(Tree *t, int key){
    if(t->root == NULL) printf("삭제할 노드가 없습니다");
    else {
        if(t->root->key == key) {
            if(t->root->left == NULL && t->root->right == NULL){
                free(t->root);
                t->root = NULL;
            } else {
                TreeNode *tmp = t->root;
                delete_Node(t->root, key, 1);
                t->root = tmp->right;
            }
        }
        else delete_Node(t->root, key, 0);
    }
    t->cnt--;
}

TreeNode* search(Tree *t, int key){
    if(t->root == NULL) return NULL;
    else return search_Node(t->root, key);
}

void preorder(TreeNode *node){
    if(node == NULL) return;
    printf("Node Key : %d\n", node->key);
    preorder(node->left);
    preorder(node->right);
}

void inorder(TreeNode *node){
    if(node == NULL) return;
    inorder(node->left);
    printf("Node Key : %d\n", node->key);
    inorder(node->right);
}

void postorder(TreeNode *node){
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    printf("Node Key : %d\n", node->key);
}

void levelorder(TreeNode *node){
    queue q;
    init_queue(&q);

    if(node == NULL) return;
    enqueue(&q, node);
    while(!is_empty(&q)){
        TreeNode *tmp = dequeue(&q);
        printf("Node Key : %d\n", tmp->key);
        if(tmp->left != NULL) enqueue(&q, tmp->left);
        if(tmp->right != NULL) enqueue(&q, tmp->right);
    }
}

void traversal(void (*order)(TreeNode*), TreeNode *node){
    order(node);
}