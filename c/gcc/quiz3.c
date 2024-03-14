#include <stdio.h>
#include "libcheckprime.h"

void main() {
    int x;
    while(1) {
        printf("Input integer (0:exit): ");
        scanf("%d", &x);
        
        if(x == 0) {
            printf("exit");
            break;
        } else {
        if(checkprime(x) == x)
            printf("%d is not prime number\n", x);
        else
            printf("%d is prime number\n", x);
        }
    }
}