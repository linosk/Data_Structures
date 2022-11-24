#include "hash_map.h"

int main(int argc, char** argv)
{

    Hash_map* HS = initilize_hash_map(100);

    Person P1;
    P1.name = "s";

    destroy_hash_map(HS);

    return 0;
}