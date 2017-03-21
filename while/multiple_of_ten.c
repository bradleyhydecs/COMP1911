#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    printf("Enter two integers: \n");
    
    int startNum, endNum;
    scanf("%d",&startNum);
    scanf("%d",&endNum);
    
    while (startNum <= endNum) 
    {
        if (startNum % 10 == 0)
        {
           printf("%d ", startNum); 
        }
        startNum = startNum + 1;
    } 
        
    return EXIT_SUCCESS;
}
