#ifndef __STACK_H__
#define __STACK_H__

#include <stdlib.h>
#include <stdio.h>

#include <assert.h>

typedef struct Stack Stack;

Stack* initilize_stack(int Size);

void push_stack(Stack* STCK, int New_value);

void pop_stack(Stack* STCK);

int get_last_value_stack(Stack* STCK);

void print_stack(Stack* STCK);

//IS STACK EMPTY

void destroy_stack(Stack* STCK);

#endif