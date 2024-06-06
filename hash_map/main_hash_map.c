#include "hash_map.h"
#include <stdio.h>

int main(void) {
    printf("Hello World\n");
    Hash_map* hp = hash_map_init(5);
    list_print(hp->list);
    return 0;
}
