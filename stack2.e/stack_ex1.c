#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int main() {
	
	int mychoice, mynumber;

	for(;;) {

		stack_print();

			int i;
			int random[10];

		for(i=0; i<10; i++){	
		 	random[i] =  rand()%2+1;
		  	printf("1:Push, 2:Pop ---> %d\n",random[i]);
			sleep(3);
			mychoice=random[i];
			if (mychoice == 1) { // Push
				printf("Number : ");
				scanf("%d", &mynumber);	

			if (stack_push(mynumber) == 1) {
				printf("Push Fail!!\n");
				} // end if
			} // end if
		
			if (mychoice == 2) { // Pop
				mynumber = stack_pop();
				if (mynumber == 9999) { // Fail
					printf("Pop Fail!!\n");
				} //end if

				else {
					printf("Poped number = %d\n", mynumber);
				} // end else
			} // end if

			if (mychoice == 99) { // program exit
				break;
			} // end if
		}//end for
	}//end for

	return 0;
}//end func


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
