#include "linkedlist.h"

int main(int argc, char** argv)
{
    //using double pointers is about copying by value or something like that
    LLNode* Head = NULL;
    ll_insert_at_beg(&Head,3);
    ll_insert_at_beg(&Head,7);
    ll_insert_at_end(&Head,1);

    ll_print_values(Head);

    ll_reverse(&Head);

    ll_print_values(Head);

    ll_destroy(Head);

    return 0;
}