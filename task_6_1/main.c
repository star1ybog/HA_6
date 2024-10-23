#include "c_list.h"
#include <stdio.h>

int main() {
    void* list[CAPACITY];  //store items
    list_data_type types[CAPACITY];  //store the type of each item
    int size = 0;  //current size of the array

    // Adding elements of different types to the list
    int i = 42;
    float f = 3.14;
    char* s1 = "C programming";
    char* s2 = "Home task 6";

    size = append_list_item(list, size, &i, int_type);
    types[size - 1] = int_type;  // Track type for this element

    size = append_list_item(list, size, &f, float_type);
    types[size - 1] = float_type;

    size = append_list_item(list, size, s1, string_type);
    types[size - 1] = string_type;

    size = append_list_item(list, size, s2, string_type);
    types[size - 1] = string_type;

    print_list((const void**)list, types, size);

    return 0;
}
