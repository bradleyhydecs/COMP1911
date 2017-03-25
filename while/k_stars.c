// This is a comment

#include <stdio.h>
#include <stdlib.h>

// in English, we want to:
//    - read k from user
//    - while k is >= 1
//    - print a star and minus one from k
// done!

int main() 
{
    int k; 
    printf("Please enter k: ");     // read k from user
    scanf("%d", &k); 

    while (k >= 1)                  // while k >= 1
    {    
        printf("*\n");              // print a star
        k = k - 1;                  // and minus one from k
    }   
    
    return EXIT_SUCCESS;
}



