#include <stdio.h>

void init_array();
void calc_array();
//void print_array();
int array[5][5];
//int temp;
int main()	{

	init_array();
	calc_array();
	//print_array();

	return 0;
}//end func

void init_array() {

	int i,j;
	int k = 1;
		
	for (i = 0; i < 5;i++) 
	for( j = 0; j < 5; j++) {
		array[i][j] = k++;
	}
}//end func
 
void calc_array() {

	int i,j;
//	int temp;
		for (i = 0; i < 5; i++) {
			for(j = 0; j < 5; j++) {
				if( i % 2 ==1) 
				/*	if(array[i] < array[j]) {
						temp = array[i];
						array[i] = array[j];
						array[j] = temp;
					}
				}
			}
		}
}*/

			printf("%4d",array[i][4-j]);
		

			else
				printf("%4d",array[i][j]);
			}
printf("\n");
		}
}

/*void print_array() {
	int i,j;
	for(j = 0;  j < 5; j++) {
		for (i = 0; i < 5; i++) 
			printf ("%4d",array[i][j]);
			printf("\n");

	}
}
*/
