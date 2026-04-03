#include <stdio.h>

int calsum(int x, int y, int z); // Prototype

int main() {
    int a, b, c, sum;
    printf("Enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = calsum(a, b, c); // a, b, c are "Actual Arguments"
    
    printf("Sum = %d\n", sum);
    return 0;
}

int calsum(int x, int y, int z) { // x, y, z are "Formal Arguments"
    int d;
    d = x + y + z;
    return (d);
}