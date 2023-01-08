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

void __bst_find_value(Tree_node* Root, int Searched, int* Found)
{
    if(*Found==1)
        return;
    if(Root==NULL)
        return;
    if(Root->Value==Searched&&*Found==0)
        *Found = 1;
    __bst_find_value(Root->Left,Searched,Found);
    __bst_find_value(Root->Right,Searched,Found);
}

void bst_find_value(Tree_node* Root, int Searched)
{
    int Found = 0;
    __bst_find_value(Root,Searched,&Found);
    if(Found==1)
        printf("The value %d is in the tree.\n",Searched);
    else
        printf("The value %d is in not in the tree.\n",Searched);
}

void bst_reverse(Tree_node* Root)
{
    if(Root==NULL)
        return;
    bst_reverse(Root->Left);
    bst_reverse(Root->Right);
    if(Root->Left!=NULL&&Root->Right!=NULL)
    {
        Tree_node* Temporary_node = Root->Left;
        Root->Left = Root->Right;
        Root->Right = Temporary_node;
    }
    else if(Root->Left!=NULL&&Root->Right==NULL)
    {
        Root->Right=Root->Left;
        Root->Left=NULL;
    }
    else if(Root->Left==NULL&&Root->Right!=NULL)
    {
        Root->Left=Root->Right;
        Root->Right=NULL;
    }
}