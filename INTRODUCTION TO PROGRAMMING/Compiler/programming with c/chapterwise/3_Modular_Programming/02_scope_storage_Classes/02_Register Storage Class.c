#include <stdio.h>

int main() {
    register int i; // CPU Register request
    
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}