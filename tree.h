#ifndef __TREE_H__
#define __TREE_H__

#include <stdlib.h>
#include <stdio.h>

#include <assert.h>

typedef struct Tree_node Tree_node;

Tree_node* __bst_create_node(int New_value);

void __bst_insert(Tree_node** Root, Tree_node* New_node);

void bst_insert(Tree_node** Root, int New_value);

void bst_display(Tree_node* Root);

void bst_destroy(Tree_node* Root);

void __bst_find_value(Tree_node* Root, int Searched, int* Found);

void bst_find_value(Tree_node* Root, int Searched);

void bst_reverse(Tree_node* Root);

#endif
