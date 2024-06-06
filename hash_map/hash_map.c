#include "hash_map.h"
#include <stdio.h>

int hash(char* str, unsigned int cap) {
    int output = 0;
    char* curr = str;
    while(*curr != '\0') {
        output = output * 31 + *curr;
        curr++; 
    }
    return output % cap;
}

Hash_map* hash_map_init(unsigned int capacity) {
    Hash_map* ht = malloc(sizeof(Hash_map));
    ht->list = list_init(capacity);
    return ht;
}

void hash_map_put(Hash_map* ht, char* key, int val) {
    int idx = hash(key, ht->list->capacity);
    // how to check if element already exists?
    // int current = list_get(ht->list, idx);
    list_set(ht->list, val, idx);
}
