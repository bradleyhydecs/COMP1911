#include <stdio.h>
#include <stdlib.h>

//#define SIZE 6

int findNumber(int target, int numbers[], int size);

int main (int argc, char* argv[]) {
    int numbers[6] = {8,9,2,6,34,4};
    
    int index = findNumber(8, numbers, 6);
    
    printf("index = %d \n", index);

    return EXIT_SUCCESS;
}

int findNumber(int target, int numbers[], int size) {
    
    int i = 0;
    while (i < size) {
        if (numbers[i] == target) {
            return i; // we found the target!
        }
        i = i + 1;
    }
    
    return -1;
}




