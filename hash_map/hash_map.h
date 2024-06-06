#include <stdbool.h>
#include "list.h"

#define LOAD_FACTOR 0.75

typedef struct {
    // size and cap are stored in list
    List* list;
} Hash_map;

//TODO
Hash_map* hash_map_init(unsigned int capacity);

// false if key already exists
bool hash_map_put(Hash_map* ht, char* key, int val);

int hash_map_get(Hash_map* ht, char* key);
void hash_map_set(Hash_map* ht, char* key, int val);
bool hash_map_isEmpty(Hash_map* ht);

// false if key not initialized
bool hash_map_remove(char* key);

bool hash_map_contains(char* key);

