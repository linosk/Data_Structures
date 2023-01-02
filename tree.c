#include "tree.h"

typedef struct Tree_node
{
    int Value;
    struct Tree_node* Left;
    struct Tree_node* Right;
}Tree_node;

Tree_node* __bst_create_node(int New_value)
{
    Tree_node* New_node = malloc(sizeof(Tree_node));
    assert(New_node!=NULL);
    New_node->Value = New_value;
    New_node->Left = NULL;
    New_node->Right = NULL;
    return New_node;
}

void __bst_insert(Tree_node** Root, Tree_node* New_node)
{
    if(*Root==NULL)
    {
        *Root = New_node;
        return;
    }
    if(New_node->Value==(*Root)->Value)
    {
        printf("There is no place for such value - %d - in this tree!\n",New_node->Value);
        free(New_node);
        return;
    }
    if(New_node->Value<(*Root)->Value)
    {
        __bst_insert(&((*Root)->Left),New_node);
    }
    if(New_node->Value>(*Root)->Value)
    {
        __bst_insert(&((*Root)->Right),New_node);
    }
}

void bst_insert(Tree_node** Root, int New_value)
{
    Tree_node* New_node = __bst_create_node(New_value);
    __bst_insert(Root,New_node);
}

void __bst_display(Tree_node* Root)
{
    if(Root==NULL)
        return;
    printf("%d\n",Root->Value);
    __bst_display(Root->Left);
    __bst_display(Root->Right);
}

void bst_display(Tree_node* Root)
{
    assert(Root!=NULL);
    printf("Root value is: %d\n", Root->Value);
    __bst_display(Root->Left);
    __bst_display(Root->Right);
}

void bst_destroy(Tree_node* Root)
{
    if(Root==NULL)
        return;
    if(Root->Left==NULL&&Root->Right==NULL)
    {
        free(Root);
    }
    bst_destroy(Root->Left);
    bst_destroy(Root->Right);
}