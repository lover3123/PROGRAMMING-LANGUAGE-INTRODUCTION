#include <stdio.h>

int main() {
    int a = 1;
    // Expected output is often 3 3 1 depending on the compiler's stack implementation!
    // Because a++ is pushed first, then ++a, then a.
    printf("%d %d %d\n", a, ++a, a++); 
    return 0;
}