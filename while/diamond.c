#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    // read our number in
    int length;
    printf("Enter side length: ");
    scanf("%d", &length);

    // loop over rows (lines)
    int row = 0;
    while (row < (length * 2) - 1) 
    {
        // loop over cols (each character)
        int col = 0;
        while (col < (length * 2) - 1) 
        {
            // if this is the top half of the diamond
            if (row < length)
            {
                //    *                           *       
                //   *                             *        
                //  *                               *      
                // *                                 *     
                if (col == (length-1) - row || col == (length-1) + row)
                {
                    printf("*");                   
                }        
                else
                {
                    printf("_");                   
                }
            }
            // else we are up to the bottom half
            else
            {     
                //  *                               *        
                //   *                             *      
                //    *                           * 
                if (col == row - (length - 1) || col == (2*(length-1)) - (row-(length-1)) )
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
