//
// Created by 최가은 on 2020/10/16.
//

#ifndef TREE_TREENODE_H
#define TREE_TREENODE_H
#include "chicken.h"
typedef chicken element;
typedef struct TreeNode{
    element data;
    int key;
    struct TreeNode *left, *right;
    struct TreeNode *parent;
}TreeNode;

TreeNode* createNode(int key, element data);
void insert_Node(TreeNode *node, TreeNode* new);
TreeNode* find_min_Node(TreeNode *node);
void connect_left(TreeNode *n, TreeNode *node);
void connect_right(TreeNode *n, TreeNode *node);
void delete_Node(TreeNode *node, int key, int is_root);
void delete_Node_root(TreeNode *node);
void delete_Node_left(TreeNode *node);
void delete_Node_right(TreeNode *node);
TreeNode* search_Node(TreeNode *node, int key);

#endif //TREE_TREENODE_H
