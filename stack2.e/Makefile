all :  stack


stack : main.o myfunc.o
	gcc -o stack main.o myfunc.o

main.o : main.c myfunc.h
	gcc -c main.c
	
myfunc.o : myfunc.c myfunc.h
	gcc -c myfunc.c

clean : 
	rm -f *.o stack

