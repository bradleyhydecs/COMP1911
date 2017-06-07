#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//text - the array of strings
//arraySize - the number of strings in the array
//numChars - print out any strings in the array with more than this number
//of characters
void printIfLonger(char *text[], int arraySize, int numChars) {
    int i = 0;
    while (i < arraySize) {
        if ( strlen(text[i]) > numChars) {
            printf("%s\n", text[i]);
        }
        i++;
    }
}

int main(int argc, char *argv[]) {

    char *words[5] = {"ok","asdff", "water", "as", "helpo"};
    printIfLonger(words,5,3);
    return 0;
}


