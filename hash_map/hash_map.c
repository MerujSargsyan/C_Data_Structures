#include "hash_map.h"

Hash_map* hash_map_init(unsigned int capacity) {
    Hash_map* ht = malloc(sizeof(Hash_map));
    ht->list = list_init(capacity);
    return ht;
}

