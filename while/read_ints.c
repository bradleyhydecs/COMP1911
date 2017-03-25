#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    int count = 0; 

    printf("Please enter num: ");
    scanf("%d", &num); 

    // while number is positive (or zero)
    while (num >= 0)
    {
        count = count + 1;
        scanf("%d", &num);  
    }

    printf("Count = %d\n", count);

	return EXIT_SUCCESS;
}

