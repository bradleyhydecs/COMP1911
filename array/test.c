#include <stdio.h>

#define N_ROWS 12
#define N_COLUMNS 15

int main(void) {
    
    
    int x;
    int numValuesRead = scanf("%d %d",&x,&y);
    printf("I read in %d values : x = %d y = %d\n",numValuesRead,x,y);
    
    /*int matrix[N_ROWS][N_COLUMNS];
        
    int row;
    int col;
    int colSum = 0;
    int rowSum = 0;
    
    // set the initial array values
    row = 0;
    while (row < N_ROWS) {
        col = 0;
        while (col < N_COLUMNS) {
        
            // set the relevant value
            matrix[row][col] = row * col;
            
            col = col + 1;
        }
        row = row + 1;
    }
    
    // sum the entire row, print out that sum
    row = 0;
    while (row < N_ROWS) {
        rowSum = 0;
        col = 0;
        while (col < N_COLUMNS) {
        
            // set the relevant value
            printf("%4d ", matrix[row][col]);
            rowSum = rowSum + matrix[row][col];
            col = col + 1;
        }
        printf("| %4d \n", rowSum);
        row = row + 1;
    }
    
    // sum the entire column, print out that sum
    col = 0;
    while (col < N_COLUMNS) {
        colSum = 0;
        row = 0;
        while (row < N_ROWS) {
        
            // get sum of the column
            colSum = colSum + matrix[row][col];
            row = row + 1;
        }
        
        printf("%4d ", colSum);
        col = col + 1;
    } 
    
    printf("\n");
    
    return 0;
    */
}



// x x x x x x x
// x x x x x x x
// x x x x x x x
// x x x x x x x
// x x x x x x x

// uh oh
