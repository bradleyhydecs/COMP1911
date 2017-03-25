#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {

    int numbers[10] = {9,8,7,6,5,4,3,2,1,55};

    printf("element at index 0 = %d \n", numbers[0]);
    printf("element at index 1 = %d \n", numbers[1]);

    printf("element at index 9 = %d \n", numbers[9]);

    // uh oh! numbers[10] doesn't exist...
    printf("element at index 10 = %d \n", numbers[10]);

    return EXIT_SUCCESS;
}
