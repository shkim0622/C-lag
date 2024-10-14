#include <stdio.h>

#include "stack.c"

int main() {
	
	int mychoice, mynumber;
	
	for(;;) {
		
		stack_print();
		printf("1:Push, 2:Pop --->");
		scanf("%d", &mychoice);
		
		if (mychoice == 1) { // Push

			printf("Number :");
			scanf("%d", &mynumber);
		
			if (stack_push(mynumber) == 1) {
				printf("Push Fail!!\n");
			} // end if
		} // end if
		
		if (mychoice == 2) { // Pop
			mynumber = stack_pop();
			if (mynumber == 9999) { // Fail
				printf("Pop Fail!!\n");
			} else {
				printf("Poped number = %d\n", mynumber);
			} // end if
		} // end if
		
		if (mychoice == 99) { // program exit
			break;
		} // end if
	} // end for
	
	return 0;
} // end func

