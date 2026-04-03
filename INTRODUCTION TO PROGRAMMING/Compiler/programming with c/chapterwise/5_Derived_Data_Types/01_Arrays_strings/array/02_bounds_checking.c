#include <stdio.h>

int main() {
    int num[4];
    int i;

    printf("Assigning values outside array bounds (Undefined Behavior)...\n");
    // Array size is 4, but we loop up to 10
    for (i = 0; i <= 10; i++) {
        num[i] = i; 
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}