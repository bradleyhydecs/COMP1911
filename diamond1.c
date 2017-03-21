#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    // read our number in
    int length;
    printf("Enter side length: ");
    scanf("%d", &length);

    // do stuff
    int row = 1;
    while (row <= (length * 2)-1 ) 
    {
        int col = 1;
        while (col <= (length * 2)-1) 
        {
            if (row <= length)
            {
                if (col == length - row + 1 || col == length + row - 1)
                {
                    printf("*");                   
                }        
                else
                {
                    printf("_");                   
                }
            }
            else
            {
                if (col == row - length + 1 || col == (2*(length)) - (row-(length)) - 1 )
                {
                    printf("*");                   
                }        
                else
                {
                    printf("_");                   
                }
            }
            col = col + 1;
        }
        printf("\n");                   
        row = row + 1;
    } 
    
    
    
    
    return EXIT_SUCCESS;
}


// length 3
// 

//   *     
//  * *   
// *   *  

