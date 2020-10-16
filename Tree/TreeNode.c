//
// Created by 최가은 on 2020/10/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "TreeNode.h"

void print(TreeNode *node){
    printf("Node key : %d\n", node->key);
}

TreeNode* createNode(element key){
    TreeNode* new = (TreeNode*)malloc(sizeof(TreeNode));
    new->key = key;
    new->left = new->right = new->parent = NULL;
    return new;
}

void insert_Node(TreeNode *node, element key){
    // 트리에 왼쪽에 삽입하는 경우
    if(key < node->key) {
        if(node->left == NULL) {
            TreeNode* tmp = createNode(key);
            node->left = tmp;
            tmp->parent = node;
        }
        else insert_Node(node->left, key);
    }
    else {
        if(node->right == NULL) {
            TreeNode* tmp = createNode(key);
            node->right = tmp;
            tmp->parent = node;
        }
        else insert_Node(node->right, key);
    }
}

void delete_Node(TreeNode *node, element key){
    if(key < node->key) {
        delete_Node(node->left, key);
    } else if(key > node->key){
        delete_Node(node->right, key);
    } else {
        // 단말노드인 경우
        if(node->left == NULL && node->right == NULL){
            if(node->parent->key < key) {
                node->parent->right = NULL;
            } else {
                node->parent->left = NULL;
            }
        }
        // 하나의 서브트리만 갖는 경우
        else if(node->left == NULL || node->right == NULL){
            if(node->left == NULL){
                node->right->parent = node->parent;
                node->parent->right = node->right;
            } else if (node->right == NULL){
                node->left->parent = node->parent;
                node->parent->left = node->left;
            }
        }
        // 중간에 있는 노드를 삭제하는 경우
        else {
            TreeNode *n = node->right;
            n->parent = node->parent;
            if(node->parent->key > node->right->key){
                node->parent->left = n;
            } else {
                node->parent->right = n;
            }

            if(n->left == NULL) {
                n->left = node->left;
                node->left->parent = n->left;
            } else {
                while(n->left != NULL) n = n->left;
                if(n->key > node->left->key){
                    n->left = node->left;
                    node->left->parent = n;
                } else {
                    n->right = node->left;
                    node->right->parent = n->left;
                }
            }
        }
        free(node);
    }
}

void search_Node(TreeNode *node, element key){
    if(node == NULL) {
        printf("해당하는 key를 가진 Data가 존재하지 않습니다.\n");
        return;
    }

    if(node->key < key){
        search_Node(node->right, key);
    } else if(node->key > key) {
        search_Node(node->left, key);
    } else{
        printf("해당하는 key를 가진 Data가 존재합니다.\n");
    }
}