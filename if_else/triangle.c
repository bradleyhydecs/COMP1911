
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    printf("Please enter sides ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sides are %d %d %d\n", a, b, c);

    // example usage of OR (the || thing)
    if ((a + b) > c || (b + c) > a || (a + c) > b) {
        printf("TRUE\n");   
    }
    else {
        printf("FALSE\n");
    }   

    return EXIT_SUCCESS;
}


