#include <stdio.h>

int main ()
{
	int i,j,k;
	for (i = 0; i < 10; i++) {

		for (j = 0; j< 10-i; j++) {
			printf(" ");
		}
		for (k =0; k < 2*i+1; k++) {
			printf("*");
		}
		for (j = 20; j>2*i+1; j--) {
			printf(" ");
		}	
		for (k =0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++) {

		for (j = 0; j < i; j++) {
			printf(" ");
		}

		for (k = 20; k > 2*i+1; k--) {
			printf("*");
		}
		for (j = 0; j < 2*i+1; j++) {
			printf(" ");
		}
		for (k = 20; k > i*2+1; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
