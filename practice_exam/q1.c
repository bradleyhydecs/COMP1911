#include <stdio.h>
#include <stdlib.h>

// standard structure we've seen a bunch of times.
// nested while loops with an if condition deciding which
// character to print.

int main(int argc, char *argv[]) {
    int length = atoi(argv[1]);
    int row = 0;
    int col = 0;
    
    while (row < length) {
        col = 0;
        while (col < length) {
            if (row == length-1 || col == 0 || col == length-1) {
                printf("#");
            } else {
                printf(" ");
            }     
        
            col++;
        }
        row++;
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
