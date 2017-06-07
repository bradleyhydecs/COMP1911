#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 64

// 6 one two three

int readCountName(int *countp, char name[MAX_NAME_LENGTH]) {

    // 
    int countTemp;
    char nameTemp[MAX_NAME_LENGTH];
    
    if (scanf("%d", &countTemp) != 1 
        || fgets(nameTemp, MAX_NAME_LENGTH, stdin) == NULL ) {
        return 0;
        
    }
    
    // find index of string start
    int i = 0;
    while (nameTemp[i] == ' ' ) {
        i++;
    }
    
    // move over the string from nameTemp[] into name[]
    // "     cat\n\0"
    //       ^  
    int j = 0;
    while (nameTemp[i] != '\n' && nameTemp[i] != '\0') {
        name[j] = nameTemp[i];
        j++;
        i++;
    }
    name[j] = '\0';
    
    *countp = countTemp;
    
    return 1;
}

int main(void) {
    
    int currCount = 0, prevCount = 0;
    char currName[MAX_NAME_LENGTH];
    char prevName[MAX_NAME_LENGTH];
    
    if (readCountName(&prevCount, prevName) == 0) {
        return 0;
    }
    
    while (readCountName(&currCount, currName) == 1) {
        //printf("{%s} {%s}\n", prevName, currName);
        if (strcmp(currName, prevName) == 0) {
            prevCount = prevCount + currCount;
        } else {
            printf("%d %s\n",prevCount, prevName);
            strcpy(prevName, currName);
            prevCount = currCount;
        }
    }    
    printf("%d %s\n",prevCount, prevName);
        
    
    
    
    
    return 0;
}








