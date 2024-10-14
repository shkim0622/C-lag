#include <stdio.h>

int main()  	{
	int i,j,k;

	printf("입력 : ");
	scanf("%d", &k);

	for (i =0; i < k; i++)	{
		for(j=0; j < k-i; j++) {
			printf(" ");
	}//end for
		for(j=0; j < i*2+1; j++) {
			printf("%c",'A'+i);
	}//end for
		printf("\n");
	}//end fo
	
	for (i =0; i < k; i++)	{
		for(j=0; j < i; j++) {
			printf(" ");
	}//end for
		for(j=k; j > i*2+1; j--) {
			printf("%c",'A'+i);
	}//end for
		printf("\n");
	}//end fo
	
return 0;
}//end func
