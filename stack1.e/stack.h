#include <stdio.h>

#ifndef MAX_ARRAY
#define MAX_ARRAY 3
#endif // MAX_ARRAY

int stack_push(int);
int stack_pop();
int stack_is_empty();
int stack_is_full();
void stack_print();

int stack_array[MAX_ARRAY];
int stack_sp = 0;