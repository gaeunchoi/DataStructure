//
// Created by 최가은 on 2020/10/15.
//

#ifndef TREE_TREE_H
#define TREE_TREE_H
#include "TreeNode.h"
#include "queue.h"
typedef struct Tree{
    TreeNode *root;
    unsigned int cnt;
}Tree;

void init(Tree* t);
void insert(Tree *t, element key);
element delete(Tree *t, element key);
void search(Tree *t, element key);

void preorder(TreeNode *node);
void inorder(TreeNode *node);
void postorder(TreeNode *node);
void levelorder(TreeNode *node);

void traversal(void (*order)(TreeNode *node), TreeNode *node);

#endif //TREE_TREE_H
