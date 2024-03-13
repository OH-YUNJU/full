#include <stdio.h>
#include <stdlib.h>
#include "libcheckeod.h"

void main() {
    int x;
    while(1) {
        printf("Input one number (0:Exit): ");
        scanf("%d", &x);
        
        if(checkeod(x) == 1)
            printf("%d is even\n", x);
        else if(checkeod(x) == 2)
            printf("%d is odd\n", x);
        else if(checkeod(x) == 3)
            break;
    }
}