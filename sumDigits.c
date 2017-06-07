#include <stdio.h>

#define MAX_LINE 4096

int main(void) 
{
    int c, digitCount = 0, intRep, sum = 0;
    
    c = getchar();
    while (c != EOF) 
    {
        if (c >= '0' && c <= '9') 
        {
            digitCount = digitCount + 1;
            
            // get the int value of the char digit
            intRep = (c - '0');
            sum = sum + intRep;
            
            printf("current char (number) = %c %d\n", c, intRep); 
            
        }
        
        c = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", digitCount, sum);
    
    return 0;
}
