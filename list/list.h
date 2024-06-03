#include <stdlib.h>
#define INIT_SIZE 0
// generic list implementation
typedef struct {
  int* array;  
  unsigned int size;
  unsigned int capacity;
} List;

List* list_init(unsigned int capacity);
void list_add(List* list, int element); 
int list_get(List* list, unsigned int idx);
void list_remove_element(List* list, int element);
void list_remove_index(List* list, unsigned int idx);
void list_insert(List* list, int element, unsigned int idx);
void list_print(List* list);
void free_list(List* list);


