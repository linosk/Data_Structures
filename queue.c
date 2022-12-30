#include "queue.h"

typedef struct Queue{
    int Queue_size;
    int Queue_top;
    int* Queue_array;
}Queue;

Queue* initilize_queue(int Size){
    Queue* Q = malloc(sizeof(Queue));
    Q->Queue_size = Size;
    Q->Queue_top = -1;
    Q->Queue_array = malloc(Q->Queue_size*sizeof(Queue));

    return Q;
}

void push_queue(Queue* Q, int New_value){
    assert(Q!=NULL);
    if(Q->Queue_top==Q->Queue_size-1)
    {
        fprintf(stdout,"Not enough space in the queue.\n");
        return;
    }
    Q->Queue_top++;
    Q->Queue_array[Q->Queue_top] = New_value;
}

void pop_queue(Queue* Q){
    assert(Q!=NULL);
    if(Q->Queue_top==-1)
    {
        fprintf(stdout,"No elements in the queue.\n");
        return;
    }
    for(int i=0;i<Q->Queue_size;i++)
    {
        Q->Queue_array[i] = Q->Queue_array[i+1];
    }
    Q->Queue_top--;
}

int get_first_value_queue(Queue* Q)
{
    assert(Q!=NULL);
    if(Q->Queue_top==-1)
        return -1;
    return Q->Queue_array[0];
}

void print_queue(Queue* Q){
    assert(Q!=NULL);
    //The if below can be made into a seperate function
    if(Q->Queue_top==-1)
    {
        fprintf(stdout,"No elements in the queue.\n");
        return;
    }
    for(int i=0;i<=Q->Queue_top;i++)
    {
        fprintf(stdout,"%d\n",Q->Queue_array[i]);
    }
}

void destroy_queue(Queue* Q){
    assert(Q!=NULL);
    free(Q->Queue_array);
    free(Q);
}