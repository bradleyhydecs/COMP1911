
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    printf("Please enter an integer ");
    scanf("%d", &num);

    // check here if odd or even
    
    if (num % 2 == 0) {
        printf("EVEN, ");
    }
    else {
        printf("ODD, ");
    }    

    if (num > 0) {
        printf("POSITIVE\n");
    }
    else if (num < 0) {
        printf("NEGATIVE\n");
    }
    // at this point, num must be == 0
    else {
        printf("ZERO\n");    
    }
    

	return EXIT_SUCCESS;
}


