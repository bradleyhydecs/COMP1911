#include <stdio.h>

#define N 10

int main(void) {
    int digitCount[N];
    int x, lastDigit;
    
    int i = 0;
    while (i < N) {
        digitCount[i] = 0;
        i = i +1;
    }

    while (scanf("%d", &x) == 1) {
        lastDigit = x % N;
        digitCount[lastDigit] = digitCount[lastDigit] + 1;
    }
    
    lastDigit = 0;
    while (lastDigit < N) {
        printf("%d numbers with last digit %d read\n", digitCount[lastDigit], lastDigit);
        lastDigit = lastDigit + 1;
    }

    return 0;
}

