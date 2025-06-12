#ifndef HASH_TABLE_H
#define HASH_TABLE_H

typedef struct {
    char* key;     //key
    char* value;   //value
} ht_item;


typedef struct {
    int size;     //size of the hash table
    int count;    //number of current elements in the table
    ht_item** items; 
} ht_hash_table;


ht_hash_table* ht_new();
//the hash table API
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);

#endif