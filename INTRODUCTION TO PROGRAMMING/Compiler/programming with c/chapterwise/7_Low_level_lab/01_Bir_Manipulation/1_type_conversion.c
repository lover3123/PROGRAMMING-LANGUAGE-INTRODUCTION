#include <stdio.h>

int main() {
    float a, b;
    
    a = 5 / 2;     // Integer division stored in float
    b = 5.0 / 2;   // Real division
    
    printf("Result of 5/2 = %f\n", a);
    printf("Result of 5.0/2 = %f\n", b);
    return 0;
}