#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10
#define TRUE 1
#define FALSE 0


int same(char s1[], char s2[]);
    
    int i = 0, j = 0;
    
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    
    return 1;
}

int main(int argc, char *argv[]) {

    char word[SIZE] = "helpo";
    removeChar(word,'e');
    return 0;
}


