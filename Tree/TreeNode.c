//
// Created by 최가은 on 2020/10/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "TreeNode.h"

TreeNode* createNode(int key, element data){
    TreeNode* new = (TreeNode*)malloc(sizeof(TreeNode));
    new->key = key;
    new->data = data;
    new->left = new->right = new->parent = NULL;
    return new;
}

void insert_Node(TreeNode *node, TreeNode* new){
    // 트리에 왼쪽에 삽입하는 경우
    if(new->key < node->key) {
        if(node->left == NULL) {
            TreeNode* tmp = new;
            node->left = tmp;
            tmp->parent = node;
        }
        else insert_Node(node->left, new);
    }
    else {
        if(node->right == NULL) {
            TreeNode* tmp = new;
            node->right = tmp;
            tmp->parent = node;
        }
        else insert_Node(node->right, new);
    }
}

TreeNode* find_min_Node(TreeNode *node){
    while(node->left != NULL) node = node->left;
    return node;
}

void connect_left(TreeNode *n, TreeNode *node){
    n->left = node->left;
    node->left->parent = n;
}

void connect_right(TreeNode *n, TreeNode *node){
    n->right = node->left;
    node->left->parent = n;
}

void delete_Node(TreeNode *node, int key, int is_root){
    if(key < node->key) {
        delete_Node(node->left, key, is_root);
    } else if(key > node->key){
        delete_Node(node->right, key, is_root);
    } else {
        // 단말노드인 경우
        if(node->left == NULL && node->right == NULL){
            if(node->parent->key < key) {
                node->parent->right = NULL;
            } else {
                node->parent->left = NULL;
            }
        }
        // 하나의 서브트리만 갖는 경우 ( 오른쪽 트리만 갖는 경우)
        else if(node->left == NULL){
            node->right->parent = node->parent;
            node->parent->right = node->right;
        }
        // 하나의 서브트리만 갖는 경우 ( 왼쪽 트리만 갖는 경우)
        else if(node->right == NULL){
            node->left->parent = node->parent;
            node->parent->left = node->left;
        }
        // 중간에 있는 노드를 삭제하는 경우
        else {
            if(is_root) delete_Node_root(node);
            else {
                if(node->parent->key > node->right->key){
                    delete_Node_left(node);
                } else {
                    delete_Node_right(node);
                }
            }
        }
        free(node);
    }
}

void delete_Node_root(TreeNode *node){
    TreeNode *n = node->right;
    n->parent = NULL;
    if(n->left == NULL) {
        n->left = node->left;
        node->left->parent = n->left;
    } else {
        n = find_min_Node(n);
        if(n->key > node->left->key){
            connect_left(n, node);
        } else {
            connect_right(n, node);
        }
    }
}

void delete_Node_left(TreeNode *node){
    TreeNode *n = node->right;
    node->parent->left = n;
    if(n->left == NULL) {
        n->left = node->left;
        node->left->parent = n->left;
    } else {
        n = find_min_Node(n);
        if(n->key > node->left->key){
            connect_left(n, node);
        } else {
            connect_right(n, node);
        }
    }
}

void delete_Node_right(TreeNode *node){
    TreeNode *n = node->right;
    node->parent->right = n;
    if(n->left == NULL) {
        n->left = node->left;
        node->left->parent = n->left;
    } else {
        n = find_min_Node(n);
        if(n->key > node->left->key){
            connect_left(n, node);
        } else {
            connect_right(n, node);
        }
    }
}

TreeNode* search_Node(TreeNode *node, int key){
    if(node == NULL) {
        printf("해당하는 key를 가진 Data가 존재하지 않습니다.\n");
        return NULL;
    }

    if(node->key < key){
        return search_Node(node->right, key);
    } else if(node->key > key) {
        return search_Node(node->left, key);
    } else{
        return node;
    }
}