#include <stdio.h>

int main() {
    float a = 0.123456789;
    double b = 0.123456789123456;
    
    printf("Float value (lost precision): %.9f\n", a);
    printf("Double value (retained): %.15lf\n", b); // %lf is for double
    
    return 0;
}