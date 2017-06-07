#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sumProd(int *sum, int *product) {
    *sum = 5;
    *product = 9;
}

int main() {
    int mainSum, mainProduct;
    
    sumProd(&mainSum, &mainProduct);
    
    printf("mainsum=%d, mainprod=%d\n", mainSum, mainProduct);

    return 0;
}
