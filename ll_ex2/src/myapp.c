#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#include "common.h"
#include "myapp.h"
#include "mylist.h"


/**
 * 리스트를 초기화하고, 랜도마이즈
 * @param none
 * @returns none
*/
void do_init() {
    srand(time(NULL));
    mylist_init();
}

/**
 * mylist에 append를 수행한다.
 * @param none
 * @returns none
*/
void do_append() {
    int number;

    for(;;) {
        printf("Input a positive decimal number:");
        scanf("%d", &number);

        if (number > 0) {
            if (mylist_append(number) == FAIL) {
                printf("Append Fail!!\n");
            }
            break;
        }
        printf("The number you input is not valid. Try again!!\n");
    }
    
}

/**
 * mylist 내에서 search를 수행한다.
 * 아이템을 찾으면 몇번째 아이템인지 표시
 * 그렇지 않으면 "Not found" 표시
 * @param none
 * @returns none
*/
void do_search() {
    int number, count;

    printf("Input a number you've wanted:");
    scanf("%d", &number);

    count = mylist_search(number);

    if (count > 0) { // meaning the number had been found in mylist
        printf("The number you've wanted is %dth!!\n", count);
        return;
    }

    printf("The number you input is not found!!\n");
}
void do_delete()	{
	int number;
	
	printf("Enter the number you want to remove:");
	scanf("%d", &number);
	 
	mylist_delete(number);
	printf("number have been removed.\n");
}
/**
 * 프로그램을 종료하기 위해 mylist를 삭제하고 cleanup을 수행
 * @param none
 * @returns none
*/
void do_cleanup() {
    mylist_cleanup();
}