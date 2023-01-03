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
    else if(New_node->Value<(*Root)->Value)
    {
        __bst_insert(&((*Root)->Left),New_node);
    }
    else
    {
        __bst_insert(&((*Root)->Right),New_node);
    }
}

void bst_insert(Tree_node** Root, int New_value)
{
    Tree_node* New_node = __bst_create_node(New_value);
    __bst_insert(Root,New_node);
}

void bst_display(Tree_node* Root)
{
    if(Root==NULL)
        return;
    printf("%d\n", Root->Value);
    bst_display(Root->Left);
    bst_display(Root->Right);
}

void bst_destroy(Tree_node* Root)
{
    if(Root==NULL)
        return;
    bst_destroy(Root->Left);
    bst_destroy(Root->Right);
    free(Root);
}

void __bst_find(Tree_node* Root, int Searched, int Depth, int Found)
{
    if(Found==1)
        return;
    if(Root==NULL)
        return;
    if(Root->Value==Searched)
    {
        printf("The value is in the tree.\n");
        Found = 1;
        return;
    }
    __bst_find(Root->Left,Searched,Depth,Found);
    __bst_find(Root->Right,Searched,Depth,Found);
    Depth++;
}

void bst_find(Tree_node* Root, int Searched)
{
    int Depth = 0;
    int Found = 0;
    __bst_find(Root,Searched,Depth,Found);
}