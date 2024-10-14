#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "myfunc.h"

int stack_array[MAX_ARRAY];
int stack_sp = 0;

int stack_push(int number) {
	if (stack_is_full() == 1) {
		return 1; // Fail
	} // end if
	
	stack_array[stack_sp] = number;
	stack_sp++;
	return 0; // Success
} // end func

int stack_pop() {
	int number;
	
	if (stack_is_empty() == 1) {
		return 9999;
	} // end if
	
	stack_sp--;
	number = stack_array[stack_sp];
	
	return number;
	
} // end func

int stack_is_empty() {
	if (stack_sp == 0) {
		return 1;
	} // end if
	return 0;	
} // end func

int stack_is_full() {
	if (stack_sp == MAX_ARRAY) {
		return 1;
	} // end if
	return 0;
} // end func

void stack_print() {
	int i;
	
	for (i = 0; i < stack_sp; i++) {
		printf("%3d ", stack_array[i]);
	} // end for
	printf("\n");
	
} // end func



c