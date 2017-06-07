#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10
#define TRUE 1
#define FALSE 0


int removeChar(char str[], char c) {
    
    int i = 0;
    int charFound = FALSE;
    
    // find the char
    while (str[i] != '\0') {
        if (str[i] == c) {
            charFound = TRUE;
            break;
        }
        printf("{%c}", str[i]);
        i++;
    }
    printf("\n");
    
    // shift the rest to the left 1
    while (str[i] != '\0') {
        str[i] = str[i+1];
        printf("{%c}", str[i]);
        i++;
    }
    
    // print
    printf("\n");
    printf("{%s}", str);
    
    return charFound;
}

int main(int argc, char *argv[]) {

    char word[SIZE] = "helpo";
    removeChar(word,'e');
    return 0;
}


