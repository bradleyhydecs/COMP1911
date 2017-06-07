#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int currNum;
    int nums[1000];
    int i = 0;
    while (scanf("%d", &currNum) != EOF) {
        printf("currNum = %d\n", currNum);
        nums[i] = currNum;
        i++;
    } 
    
    if (i % 2 == 0) {
        printf("middle number = %d\n", nums[(i/2)-1]);
    } else {
        printf("middle number = %d\n", nums[(i/2)]);
    }

    return 0;
}
