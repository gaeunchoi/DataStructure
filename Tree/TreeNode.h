//
// Created by 최가은 on 2020/10/16.
//

#ifndef TREE_TREENODE_H
#define TREE_TREENODE_H

typedef int element;
typedef struct TreeNode{
    element key;
    struct TreeNode *left, *right;
    struct TreeNode *parent;
}TreeNode;

void print(TreeNode *node);
TreeNode* createNode(element key);
void insert_Node(TreeNode *node, element key);
void delete_Node(TreeNode *node, element key);
void search_Node(TreeNode *node, element key);

#endif //TREE_TREENODE_H
