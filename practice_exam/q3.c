#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// many people over complicated this by trying to create a new
// array. all you question asked you to do was print something,
// so just print as you go.

#define MAX_LINE_LEN 512
#define MAX_STRING_LEN 32

void doStuffToThisLine(char targetChar, char stringToPrint[MAX_STRING_LEN], char line[MAX_LINE_LEN]) {
    int currIndex = 0;
    while (line[currIndex] != '\0') {
        //printf("%c", line[currIndex]);        // remember to print things as you go!
        
        char thisChar = line[currIndex];
        
        // convert to lower case if required (the manual way)
        if (thisChar >= 'A' && thisChar <= 'Z') {
            thisChar = thisChar + 32;
        }
        
        // OR... this requires #include <ctype.h>
        //if (isupper(thisChar) {
        //    thisChar = tolower(thisChar);
        //}
        
        if (thisChar == targetChar) {
            printf("%s%c%s", stringToPrint, line[currIndex], stringToPrint);
        } else {
            printf("%c", line[currIndex]);
        }
        currIndex++;
    }
    
}

int main(int argc, char * argv[]) {
    char targetChar;
    char stringToPrint[MAX_STRING_LEN];
    char line[MAX_LINE_LEN];
    FILE *fileHandle;

    printf("Enter character: ");
    scanf("%c", &targetChar);
    
    printf("Enter string: ");
    scanf("%s", stringToPrint);
    
    if (argc == 1) {
        printf("Enter text: ");
        scanf("%s", line);
       
        // moving the "do stuff to this line" part into a function saves you 
        // having to copy/paste it for both cases (normal user input and file input below).
        // it makes things easier to read and (potentially) debug.
        // do whatever you find easiest in the exam.

        doStuffToThisLine(targetChar, stringToPrint, line);
    } else {
        fileHandle = fopen(argv[1],"r");
        
        // question asks to print an error message if file does not exist
        if (fileHandle == NULL) {
            printf("Error: can't open %s\n",argv[1]);
            return 0;
        }
        
        // loop over all lines in the file
        while (fgets(line, MAX_LINE_LEN, fileHandle) != NULL) {
            doStuffToThisLine(targetChar, stringToPrint, line);
        }
    }

    return 0;
}
