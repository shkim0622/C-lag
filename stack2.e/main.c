#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "myfunc.h"
int main() {
	
	int mychoice, mynumber;
	int i,j;
	int random;
	printf("Input a probability of a push action(%) : ");
	scanf("%d",&j);
	
	for(;;) {
		sleep(3);
		random =  rand()%10+1;
		printf("1:Push, 2:Pop ---> %d\n",random);
			
		if (random <=7 )
			printf("push\n");
		else
			printf("pop\n");
			
		mychoice=random;
			
		if (mychoice <=7) { // Push
			mynumber = rand()%100;
			printf("Number : %d\n",mynumber);

			if (stack_push(mynumber) == 1) {
				printf("Push Fail!!\n");
				} // end if
		} // end if
	
		if (mychoice > 7) { // Pop
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
	
	return 0;
}//end func
