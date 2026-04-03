#include <stdio.h>

void swapv(int x, int y);
void swapr(int *x, int *y);

int main() {
    int a = 10, b = 20;
    
    // Call by Value (Fails to swap in main)
    swapv(a, b); 
    printf("After Call by Value: a = %d, b = %d\n", a, b);
    
    // Call by Reference (Succeeds)
    swapr(&a, &b); 
    printf("After Call by Reference: a = %d, b = %d\n", a, b);
    
    return 0;
}

void swapv(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

void swapr(int *x, int *y) {
    int t = *x; // t gets the value at address x
    *x = *y;    // value at address x becomes value at address y
    *y = t;     // value at address y becomes t
}