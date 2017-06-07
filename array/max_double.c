#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

double getMax(double numbers[]);

int main (int argc, char* argv[]) {

    double numbers[SIZE] = {8.4,9.9,7.3,6.5,55.1,4.0};

    double max = getMax(numbers);
    
    printf("max = %.2lf \n", max);

    return EXIT_SUCCESS;
}

double getMax(double numbers[]) {
    double max = numbers[0];
    
    int i = 0;
    while (i < SIZE) {
        if (numbers[i] > max) {
            max = numbers[i];
            printf("found a new max! %.2lf \n", max);
        }
        i = i + 1;
    }
    
    return max;
}


