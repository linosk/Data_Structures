#include "stack.h"

typedef struct Stack{
    int Stack_size;
    int Stack_top;
    int* Stack_array;
} Stack;

Stack* initilize_stack(int Size){
    Stack* STCK = malloc(sizeof(Stack));
    STCK->Stack_size = Size;
    STCK->Stack_top = -1;
    STCK->Stack_array = malloc(STCK->Stack_size*sizeof(int));

    return STCK;
}

void push_stack(Stack* STCK, int New_value){
    assert(STCK!=NULL);
    if(STCK->Stack_top==STCK->Stack_size-1)
    {
        fprintf(stdout,"Not enough space in the stack.\n");
        return;
    }
    STCK->Stack_top++;
    STCK->Stack_array[STCK->Stack_top] = New_value;
}

void pop_stack(Stack* STCK){
    assert(STCK!=NULL);
    //The if below can be made into a seperate function
    if(STCK->Stack_top==-1)
    {
        fprintf(stdout,"No elements in the stack.\n");
        return;
    }
    STCK->Stack_top--;
}

void print_stack(Stack* STCK){
    assert(STCK!=NULL);
    //The if below can be made into a seperate function
    if(STCK->Stack_top==-1)
    {
        fprintf(stdout,"No elements in the stack.\n");
        return;
    }
    for(int i=0;i<=STCK->Stack_top;i++)
    {
        fprintf(stdout,"%d\n",STCK->Stack_array[i]);
    }
}

void destroy_stack(Stack* STCK){
    assert(STCK!=NULL);
    free(STCK->Stack_array);
    free(STCK);
}