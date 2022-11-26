#ifndef __HASH_MAP_H__
#define __HASH_MAP_H__

#include <stdlib.h>
#include <stdio.h>

#include <string.h>

#include <assert.h>

typedef struct Person Person;

typedef struct Hash_map Hash_map;

Hash_map* initilize_hash_map(int Size);

int __hash_function(char* Name, int Lenght);

void insert_hash(Hash_map* HSHMP, char* Name, int Length);

void print_hash_table(Hash_map* HSHMP);

void destroy_hash_map(Hash_map* HSHMP);

#endif
