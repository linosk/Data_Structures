#include "hash_map.h"

int main(int argc, char** argv)
{

    Hash_map* HS = initilize_hash_map(100);

    insert_hash(HS,"Damian",6);
    insert_hash(HS,"Anna",4);
    insert_hash(HS,"Oskar",5);
    insert_hash(HS,"Zuzanna",7);
    insert_hash(HS,"Tomasz",6);
    insert_hash(HS,"Edward",6);
    insert_hash(HS,"Eliza",6);
    insert_hash(HS,"Szymon",6);
    insert_hash(HS,"Dariusz",7);
    insert_hash(HS,"Mariusz",7);

    print_hash_table(HS);

    destroy_hash_map(HS);

    return 0;
}