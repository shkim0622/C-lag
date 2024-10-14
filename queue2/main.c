#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#include "myqueue.h"

void do_enqueue();
void do_dequeue();

int main() {

	
	int j,k;
	int mychoice;

	srand(time(NULL));

	printf("set the number of queue : ");
	scanf("%d",&k);
	
	queue_create(k);
	
	printf("Input a probability of a push action(%%) : ");
	scanf("%d",&j);
	
	
	for(;;) {
		sleep(3);

		mychoice =  rand() % 100;
			
		if (mychoice <= j) { // enqueue
			printf("enqueue\n");
			do_enqueue();
			queue_print();
		} // end if
	
		if (mychoice > j) { // dequeue
			printf("dequeue\n");
			do_dequeue();
			queue_print();
		} // end if

	}//end for
	
	queue_destroy();

		
	return 0;
}//end func

void do_enqueue() {
	int mynumber;

	mynumber = rand()%100;
	printf("Number : %d\n",mynumber);

	if (enqueue(mynumber) == 1) {
		printf("enqueue Fail!!\n");
	} // end if
} // end func

void do_dequeue() {
	int mynumber;

	mynumber = dequeue();
	if (mynumber == 9999) { // Fail
		printf("queue Fail!!\n");
	} else {
		printf("Poped number = %d\n", mynumber);
	} // end else
} 