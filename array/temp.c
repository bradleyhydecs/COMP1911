#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", board[i][j]);
        }
    }
}       

int main (int argc, char* argv[]) {

    int board[SIZE][SIZE] = { {9,8,7},{9,8,7},{9,8,7} };

    printBoard(board);    
    
    return EXIT_SUCCESS;
}


