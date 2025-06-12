#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hash_table.h"


int main() {
    char* key = "TestKey";
    char* value = "TestValue";
    ht_hash_table* ht = ht_new();
    ht_insert(ht,key,value);
    char* out = ht_search(ht,key);
    printf("the output is :%s",out);
    ht_delete(ht,key);

    
    return 0;
}