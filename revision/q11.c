#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

int main(int argc, char *argv[]) {

    int arr[SIZE][SIZE] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4} };
    mult(arr, 2);
    return 0;
}


void mult(int arr[SIZE][SIZE], int multiplier) {
    int row, col;
    
    row = 0;
    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            arr[row][col] = arr[row][col] * multiplier;
            col++;    
        }
        row++;
    }
    
}
