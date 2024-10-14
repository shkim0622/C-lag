#include <stdio.h>


#include "common.h"
#include "myapp.h"
#include "mylist.h"


int main() {

    int param;

    // 1. Initialize mylist, randomization
    do_init();

    // 2. The loop
    for (;;) {
        fflush(NULL);
        printf("Append[1] or Search[2] or DELETE[3]?:");
        scanf("%d", &param);
        

        switch(param) {
            //case APPEND_L:
            case APPEND:
                do_append();
                break;
            //case SEARCH_L:
            case SEARCH:
                do_search();
			case DELETE:
				do_delete();
                break;
            default:
                break;
        }  // end switch

        mylist_print();
    } // end for

    do_cleanup();

    return 0;

} // end func
