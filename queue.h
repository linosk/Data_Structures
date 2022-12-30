#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdlib.h>
#include <stdio.h>

#include <assert.h>

typedef struct Queue Queue;

Queue* initilize_queue(int Size);

void push_queue(Queue* Q, int New_value);

void pop_queue(Queue* Q);

int get_first_value_queue(Queue* Q);

void print_queue(Queue* Q);

//IS QUEUE EMPTY

void destroy_queue(Queue* Q);

#endif