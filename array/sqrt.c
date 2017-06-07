#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 6

void setSqrt(double numbers[]);

int main (int argc, char* argv[]) {

    double numbers[SIZE];

    setSqrt(numbers);
    
    printf("%lf %lf %lf \n", numbers[0], numbers[2], numbers[5]);

    return EXIT_SUCCESS;
}

void setSqrt(double numbers[]) {
    int i = 0;
    while (i < SIZE) {
        numbers[i] = sqrt(i);
        i = i + 1;
    }    
    
    // since this is an array, we don't need to do return it.
}


