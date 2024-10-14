#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "myqueue.h"

int *_queue_array;
int _queue_qp = 0;
int queue_start = -1;
int queue_end = -1;
int queue_len;

int queue_create(int number) {
	_queue_array = (int *)malloc(sizeof(int) * number);
	if (_queue_array == NULL) {
		return -1; // fail
	} // end if
	queue_len = number;
	queue_start = 0;
	queue_end =number-1;
	
	return 0; // success
} // end func

int queue_destory() {
	free(_queue_array);
	return 0;
}
int enqueue(int number) {
	if (_queue_is_full() == 1) {
		printf("queue is full \n");
		return 1; // Fail
	} // end if
	queue_start++;
	queue_start %=  queue_len;
	
	_queue_array[queue_start] = number;
	return 0; // Success
} // end func

int dequeue() {
	if (_queue_is_empty() == 1) {
		printf("queue is empty\n");
		return 9999;//Fail
	} //end if
	queue_end = (queue_end + 1) % queue_len;
	return 	_queue_array[queue_end];
} // end func

int _queue_is_empty() {
	if ((queue_end+1) % queue_len == queue_start) {

		return 1;//true
	} // end if
	return 0;	//false
} // end func

int _queue_is_full()	{
	if ( (queue_start+1) % queue_len == queue_end ) {
		return 1;//true
	} // end if
	return 0;//false
} // end func

void queue_print() {
	int i;
	
	for (i = 0; i <queue_len; i++) {
		
		
		printf("%3d ", _queue_array[i]);
	} // end for

	printf("start = %d	end = %d \n", queue_start, queue_end);
	
} // end func
