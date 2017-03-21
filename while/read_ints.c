#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    printf("Enter some integers: \n");
    
    int number;
    int returnCode = scanf("%d",&number);
    int count = 0;
    
    while (returnCode == 1) 
    {
        count = count + 1;
        returnCode = scanf("%d",&number);
    } 
    
    printf("You entered %d integers\n", count);
    
    return EXIT_SUCCESS;
}
