#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    int startNum;
    int count = 0;

    printf("Enter two integers: \n");
    scanf("%d",&startNum);
    
    while (startNum/10 > 0) 
    {
        startNum = startNum / 10;
        count++;
    } 
    
    printf("Result = %d\n", count);
        
    return EXIT_SUCCESS;
}
