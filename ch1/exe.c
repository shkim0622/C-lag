#include <stdio.h>

int main()	{

	int i, j,k; 
	for ( i = 0; i <10; i++) {
		for (j = 0; j<i ; j++) {
			printf(" ");	
		}//end for j
	
		for(k=20; k >i*2+1; k--) {
			
			printf("*");
		}//end for k	
		printf("\n");
	}//end for i
return 0;

}//end func


