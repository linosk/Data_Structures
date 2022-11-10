#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

typedef struct LLNode
{
    int value;
    struct LLNode* next;
}LLNode;

LLNode* __ll_create_node(int New_value);
void ll_insert_at_beg(LLNode** Head_node, int New_value);
void ll_insert_at_end(LLNode** Head_node, int New_value);
void ll_reverse(LLNode** Head_node);
void ll_print_values(LLNode* Head_node);
void ll_destroy(LLNode* Head_node);

#endif