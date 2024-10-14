all : stack.ex1

stack.ex1 : main.o stack.o
	gcc -o stack.ex1 main.o stack.o

main.o : main.c stack.h
	gcc -c main.c

stack.o : stack.c stack.h
	gcc -c stack.c
clean : 
	rm -f *.o stack.ex1

