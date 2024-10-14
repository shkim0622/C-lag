#include <stdio.h>

// Function declarations
void init_array();
void calc_array();
void print_array();

// Global variables
int array[5][5];

int main() {

    init_array();
    calc_array();
    print_array();

    return 0;
}  // end func

void init_array() {
    int x, y;
    for (y = 0; y < 5; y++)
        for (x = 0; x < 5; x++)
            array[x][y] = 0;
} // end func

void calc_array() {
    int x, y;
    for (y = 0; y < 5; y++)
        for (x = 0; x < 5; x++)
            array[x][y] = y * 5 + x + 1;

} // end func

void print_array() {
    int x, y;
    for (y = 0; y < 5; y++) {
        for (x = 0; x < 5; x++)
            printf("%4d", array[x][y]);
        printf("\n");
    } // end for

} // end func
