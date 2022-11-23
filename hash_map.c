#include "hash_map.h"

typedef struct Person{
    char* Name;
    int Age;
    char* Nationality;
}Person;

typedef struct Hash_map{
    int Hash_size;
    Person* Hash_table;
}Hash_map;

Hash_map* initilize_hash_map(int Size){
    Hash_map* HSHMP = malloc(sizeof(Hash_map));
    HSHMP->Hash_size = Size;
    HSHMP->Hash_table = malloc(HSHMP->Hash_size*sizeof(Person));
    return HSHMP;
}

int __hash_function(char* Name, int Age, Nationality Nationality);

typedef enum Nationality{
    Polish,
    Croatian,
    Russian,
    German,
    Dutch,
    Swedish,
    English,
    French,
    Spanish,
    Italian
}Nationality;

void insert_hash(Hash_map* HSHMP, char* Name, int Age, Nationality Nationality){

}

void destroy_hash_map(Hash_map* HSHMP){
    free(HSHMP->Hash_table);
    free(HSHMP);
}