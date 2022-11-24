#include "hash_map.h"

typedef struct Person{
    char* Name;
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

//need to defeta enum type later

int __hash_function(char* Name){
    int Buf = 0;
    int Key = 0;
    while(Name[Buf]!='\0')
    {
        Buf++;
        Key = Key + (Name[Buf]*Name[Buf]-Buf) + Buf;
    }
    return Key;
}

void insert_hash(Hash_map* HSHMP, char* Name){
    assert(HSHMP!=NULL);
    int Value = (__hash_function(Name))%HSHMP->Hash_size;
    //HSHMP->Hash_table[Value]

    //delete later
    printf("%d\n",Value);
}

void destroy_hash_map(Hash_map* HSHMP){
    free(HSHMP->Hash_table);
    free(HSHMP);
}