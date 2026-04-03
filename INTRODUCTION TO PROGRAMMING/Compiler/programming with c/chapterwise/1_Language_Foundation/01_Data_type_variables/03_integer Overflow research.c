#include <stdio.h>

int main() {
    short int a = 32767; // Max value for 16-bit signed integer
    short int b = a + 1;
    short int c = a + 2;
    
    // It will not print 32768. It wraps around to the negative side!
    printf("a = %d\n", a);
    printf("b = %d\n", b); // Prints -32768
    printf("c = %d\n", c); // Prints -32767
    
    return 0;
}