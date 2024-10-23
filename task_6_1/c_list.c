#include "c_list.h"
#include <stdio.h>

//appends an item to the list and returns the new size.
int append_list_item(void* list[], int size, void* item, list_data_type type) {
    if (size >= CAPACITY) {
        return -1;  // List is full
    }
    list[size] = item;  // Add the item to the list
    return size + 1;  // Return the new size
}

//prints the elements of the list based on their type.
void print_list(const void* list[], const list_data_type types[], int size) {
    printf("List size = %d\n", size);

    for (int i = 0; i < size; i++) {
        switch (types[i]) {
            case int_type:
                printf("%d ", *(int*)list[i]);  // Dereference and print as int
                break;
            case float_type:
                printf("%f ", *(float*)list[i]);  // Dereference and print as float
                break;
            case string_type:
                printf("%s ", (char*)list[i]);  // Print as string
                break;
        }
    }
    printf("\n");
}
