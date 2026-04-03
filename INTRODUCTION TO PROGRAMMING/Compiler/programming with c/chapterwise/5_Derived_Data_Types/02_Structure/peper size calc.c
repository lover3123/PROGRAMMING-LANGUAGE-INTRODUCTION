#include <stdio.h>

int main() {
    int a0_h = 1189, a0_w = 841;
    int temp;
    
    printf("A0: %d x %d\n", a0_h, a0_w);
    
    // A1
    temp = a0_h; a0_h = a0_w; a0_w = temp/2;
    printf("A1: %d x %d\n", a0_h, a0_w);
    
    // A2
    temp = a0_h; a0_h = a0_w; a0_w = temp/2;
    printf("A2: %d x %d\n", a0_h, a0_w);
    
    // Repeat logic for A3-A8...
    return 0;
}