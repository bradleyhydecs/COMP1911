#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_LINES 4
#define MAX_LINE_LENGTH 64
/*
int notInLinesArray(char lines[N_LINES][MAX_LINE_LENGTH], int n, char target[])
{
    printf("reached notInLinesArray \n");
    
    // use strcmp
    int i = 0;
    while (i < N_LINES) {
        // test if this string is our target
        if (strcmp(lines[i], target) == 0) {
            return 1;
        }
        i = i +1;
    }
    return 1;    
}
*/

int numInLinesArray(char lines[N_LINES][MAX_LINE_LENGTH], int n, char target[])
{
    printf("reached notInLinesArray \n");
    
    int i = 0;
    int sum = 0;
    while (i < N_LINES) {
        // test if this string is our target
        if (strcmp(lines[i], target) == 0) {
            sum = sum + 1;
        }
        i = i +1;
    }
    return sum;    
}

int hasDuplicates(char lines[N_LINES][MAX_LINE_LENGTH], int n) {
    int sum = 0;
    
    int i = 0;
    while (i < N_LINES) {
        if (numInLinesArray(lines, N_LINES, lines[i]) >= 2) {
            printf("found duplicate! %s\n", lines[i]);
            return 1;
        }
        i = i + 1;
    }
    
}

int main(int argc, char *argv[]) {
    
    char strings[N_LINES][MAX_LINE_LENGTH] = {"one", "two", "three", "two"};    
    
    hasDuplicates(strings, N_LINES);
    
    return 0;
}

