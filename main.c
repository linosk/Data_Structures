#include "hash_map.h"

int main(int argc, char** argv)
{
    Hash_map* HS = initilize_hash_map(100);

    destroy_hash_map(HS);

    return 0;
}