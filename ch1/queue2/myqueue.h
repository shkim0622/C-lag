#ifndef _MYSTACK_H_
#define _MYSTACK_H_

#ifndef MAX_ARRAY
#define MAX_ARRAY 10
#endif // MAX_ARRAY

//extern int *_stack_array;
//extern int _stack_sp;

int queue_create(int);
int queue_destroy();
int enqueue(int);
int dequeue();
int _queue_is_empty();
int _queue_is_full();
void queue_print();

#endif // _MYSTACK_H_
