#include <stdio.h>
#include <stdlib.h>

// again, pretty standard question structure.
// scanf until we reach EOF, do something with the input.

int main(int argc, char *argv[]) {
    
    int evens[100];
    int num;
    int currentIndex = 0;
    int i = 0;
    
    while (scanf("%d", &num) != EOF) {
        
        // another option is to put ALL the numbers in the array
        // and decide if they are even when we print them out,
        // but I'm doing it here
        
        if (num % 2 == 0) {
            evens[currentIndex] = num;
            currentIndex++;
        }
    } 
    
    // simply print out the array
    printf("Even numbers were: ");
    while (i < currentIndex) {
        printf("%d ", evens[i]);
        i++;
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}
