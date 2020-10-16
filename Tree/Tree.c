//
// Created by 최가은 on 2020/10/15.
//

#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

void init(Tree* t){
    t->root = NULL;
    t->cnt = 0;
}
void insert(Tree *t, element key){
    // 맨 처음 Tree에 넣을때 비어있는지 if문으로 체크
    if(t->root == NULL) t->root = createNode(key);
    // 이미 Tree가 생성되어 있다면 Node 삽입
    else insert_Node(t->root, key);

    // Node 수 증가
    t->cnt++;
}

element delete(Tree *t, element key){
    if(t->root == NULL) printf("삭제할 노드가 없습니다");
    else delete_Node(t->root, key);
    t->cnt--;
}

void search(Tree *t, element key){
    if(t->root == NULL) printf("Tree가 비었습니다.");
    else search_Node(t->root, key);
}

void preorder(TreeNode *node){
    if(node == NULL) return;
    print(node);
    preorder(node->left);
    preorder(node->right);
}

void inorder(TreeNode *node){
    if(node == NULL) return;
    inorder(node->left);
    print(node);
    inorder(node->right);
}

void postorder(TreeNode *node){
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    print(node);
}

void levelorder(TreeNode *node){
    queue q;
    init(&q);

    if(node == NULL) return;
    enqueue(&q, node);
    while(!is_empty(&q)){
        TreeNode *tmp = dequeue(&q);
        print(tmp);
        if(tmp->left != NULL) enqueue(&q, tmp->left);
        if(tmp->right != NULL) enqueue(&q, tmp->right);
    }
}

void traversal(void (*order)(TreeNode *node), TreeNode *node){
    order(node);
}