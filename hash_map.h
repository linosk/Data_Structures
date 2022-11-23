#ifndef __HASH_MAP_H__
#define __HASH_MAP_H__

#include <stdlib.h>

typedef struct Person Person;

typedef struct Hash_map Hash_map;

Hash_map* initilize_hash_map(int Size);

int __hash_function(char* Name, int Age, Nationality Nationality);

typedef enum Nationality Nationality;

void insert_hash(Hash_map* HSHMP, char* Name, int Age, Nationality Nationality);

void destroy_hash_map(Hash_map* HSHMP);

#endif
