#include "linkedlist.h"

LLNode* __ll_create_node(int New_value)
{
    LLNode* New_node = malloc(sizeof(LLNode));
    assert(New_node!=NULL);
    New_node->value = New_value;
    New_node->next = NULL;
    return New_node;
}

void ll_insert_at_beg(LLNode** Head_node, int New_value)
{
    LLNode* New_node = __ll_create_node(New_value);
    if(*Head_node==NULL)
    {
        (*Head_node) = New_node;
        return;   
    }
    New_node->next = (*Head_node);
    (*Head_node) = New_node;
}

void ll_insert_at_end(LLNode** Head_node, int New_value)
{
    LLNode* New_node = __ll_create_node(New_value);
    if(*Head_node==NULL)
    {
        (*Head_node) = New_node;
        return;   
    }
    LLNode* Current_node = (*Head_node);
    while(Current_node->next!=NULL)
    {
        Current_node=Current_node->next;
    }
    Current_node->next = New_node;
}

//counting positions starts from 0
void ll_insert_at_position(LLNode** Head_node, int New_value, int Position)
{
    LLNode* New_node = __ll_create_node(New_value);
    if(*Head_node==NULL)
    {
        (*Head_node) = New_node;
        return; 
    }
    LLNode* Current_node = (*Head_node);
    int Counter = 0;
    while(Current_node!=NULL)
    {
        Counter++;
        if(Counter==Position)
        {
            New_node->next=Current_node->next;
            Current_node->next=New_node;
            return;
        }
        Current_node = Current_node->next;
    }
    free(New_node);
    fprintf(stdout,"There is no position %d, list is too short.\n",Position);
}

void ll_delate_at_beg(LLNode** Head_node)
{
    assert((*Head_node)!=NULL);
    LLNode* Current_node = (*Head_node)->next;
    free(*Head_node);
    (*Head_node) = Current_node;
}

void ll_delate_at_end(LLNode** Head_node)
{
    assert((*Head_node)!=NULL);
    LLNode* Current_node = (*Head_node);
    LLNode* Temporary_node;
    while(Current_node->next->next!=NULL)
    {
        Current_node = Current_node->next;
    }
    Temporary_node = Current_node->next;
    free(Temporary_node);
    Current_node->next = NULL;
}

//counting positions starts from 0
void ll_delete_at_position(LLNode** Head_node, int Position)
{
    assert((*Head_node)!=NULL);
    LLNode* Current_node = (*Head_node);
    LLNode* Temporary_node;
    int Counter = 0;
    while(Current_node!=NULL)
    {
        Counter++;
        if(Counter==Position)
        {
            Temporary_node = Current_node->next;
            Current_node->next = Temporary_node->next;
            free(Temporary_node);
            return;
        }
        Current_node = Current_node->next;
    }
    fprintf(stdout,"There is no position %d, list is too short.\n",Position);
}

void ll_sort_ascending(LLNode** Head_node);
void ll_sort_descending(LLNode** Head_node);

void ll_reverse(LLNode** Head_node)
{
    assert((*Head_node)!=NULL);
    LLNode* Current_node = (*Head_node);
    LLNode* Next_node = NULL;
    LLNode* Previous_node = NULL;
    //while (Current_node!=NULL)
    while(Current_node!=NULL)
    {
        Next_node = Current_node->next;
        Current_node->next = Previous_node;
        Previous_node = Current_node;
        Current_node = Next_node;
    }
    (*Head_node) = Previous_node;
}

void ll_print_values(LLNode* Head_node)
{
    assert(Head_node!=NULL);
    LLNode* Current_node = Head_node;
    //fprintf and printf difference?
    while(Current_node!=NULL)
    {
        //it appears that fprintf also takes the memory like printf :(
        fprintf(stdout,"Value: %d\n",Current_node->value);
        Current_node = Current_node->next;
    }
    fprintf(stdout,"\n");
}

void ll_destroy(LLNode* Head_node)
{
    assert(Head_node!=NULL);
    LLNode* Current_node = Head_node;
    LLNode* Temporary_node;
    while(Current_node!=NULL)
    {
        Temporary_node = Current_node->next;
        free(Current_node);
        Current_node = Temporary_node;
    }
    Head_node = NULL;
}