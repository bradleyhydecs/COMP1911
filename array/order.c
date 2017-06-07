#include <stdio.h>
#include <stdlib.h>

//#define SIZE 6

int isIncreasing(int numbers[], int size);

int main (int argc, char* argv[]) {
    int numbers[6] = {8,9,2,6,34,4};
    
    int result = isIncreasing(numbers, 6);
    
    printf("result = %d \n", result);

    return EXIT_SUCCESS;
}

int isIncreasing(int numbers[], int size) {
    
    int i = 0;
    while (i < size-1) {
        if (numbers[i] > numbers[i+1]) {
            return 0;
        }
        i = i + 1;
    }
    
    return 1;
}


