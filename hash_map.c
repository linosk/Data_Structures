#include "hash_map.h"

typedef struct Person{
    char* Name;
}Person;

typedef struct Hash_map{
    int Hash_size;
    Person** Hash_table;
}Hash_map;

Hash_map* initilize_hash_map(int Size){
    Hash_map* HSHMP = malloc(sizeof(Hash_map));
    HSHMP->Hash_size = Size;
    HSHMP->Hash_table = malloc(HSHMP->Hash_size*sizeof(Person*));
    for(int i=0;i<HSHMP->Hash_size;i++)
    {
        HSHMP->Hash_table[i] = NULL;
    }
    return HSHMP;
}

//Either change it or leave it be depending on how char* will be passed to parent function
int __hash_function(char* Name, int Length){
    int Buf = 0;
    int Key = 0;
    while(Name[Buf]!='\0')
    {
        Buf++;
        Key = Key + (Name[Buf]*Name[Buf]-Buf) + Buf*Length - Length;
    }
    return Key;
}

//Change it later
void insert_hash(Hash_map* HSHMP, char* Name, int Length){
    assert(HSHMP!=NULL);
    int Value = (__hash_function(Name, Length))%HSHMP->Hash_size;
    if(HSHMP->Hash_table[Value]!=NULL)
    {
        printf("Cannot insert name '%s' due to collision.\n",Name);
        return;
    }
    HSHMP->Hash_table[Value] = malloc(sizeof(Person));
    HSHMP->Hash_table[Value]->Name = malloc(Length*sizeof(char));
    strncpy(HSHMP->Hash_table[Value]->Name,Name,Length*sizeof(char));
}

void print_hash_table(Hash_map* HSHMP)
{
    for(int i=0;i<HSHMP->Hash_size;i++)
    {
        if(HSHMP->Hash_table[i]!=NULL)
        {
            printf("The value at [%d]: %s\n",i,HSHMP->Hash_table[i]->Name);
        }
    }
}

void destroy_hash_map(Hash_map* HSHMP){
    for(int i=0;i<HSHMP->Hash_size;i++)
    {
        if(HSHMP->Hash_table[i]!=NULL)
        {
            free(HSHMP->Hash_table[i]->Name);
            free(HSHMP->Hash_table[i]);
        }
    }
    free(HSHMP->Hash_table);
    free(HSHMP);
}