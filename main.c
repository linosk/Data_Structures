#include "tree.h"

int main(int argc, char** argv)
{
    Tree_node* Root = NULL;
    bst_insert(&Root,4);
    bst_insert(&Root,3);
    bst_insert(&Root,5);
    bst_insert(&Root,1);
    bst_insert(&Root,2);
    bst_insert(&Root,6);
    bst_insert(&Root,1);

    bst_display(Root);

    //bst_destroy(Root);

    return 0;
}