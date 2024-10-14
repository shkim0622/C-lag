#include<stdio.h>

void print_chars(char a,int b);
void print_CRLF();

int main() {

	int i,j,k;
	printf("입력");
	scanf("%d",&k);
	
	/*print_chars('*',k*2-1);	
	print_CRLF();
*/
	for(i =0;i < k;i++) {
		print_chars (' ',k-i);
		print_chars ('*',i*2+1);
		print_chars (' ',2*(k-i-2)+2);
		print_chars ('*',i*2+1);
		print_CRLF();
	}
	for(i=0; i < k-1; i++) {
		print_chars(' ',i+2);
		print_chars('*',2*(k-i-1)-1);
		print_chars(' ',i*2+2);
		print_chars('*',2*(k-i-1)-1);
		print_CRLF();
	}
/*	print_chars('*',k*2-1);	
	print_CRLF();
*/
	return 0;

}
void print_chars(char a, int b) {
	int j;
	for(j=0;j<b;j++) {
		printf("%c",a);
	}
}
void print_CRLF() {
	printf("\n");
}


