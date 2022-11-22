//#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main(int argc, char** argv)
{

    Stack* Stack = initilize_stack(5);
    push_stack(Stack,2);
    push_stack(Stack,4);
    push_stack(Stack,8);
    push_stack(Stack,16);
    push_stack(Stack,32);
    print_stack(Stack);
    pop_stack(Stack);
    print_stack(Stack);
    destroy_stack(Stack);

    return 0;
}