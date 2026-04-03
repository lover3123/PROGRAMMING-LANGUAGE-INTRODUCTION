#include <stdio.h>

int main() {
    int num, a, b, c, d, e;
    int sum;
    
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    
    e = num % 10;      // 5th digit
    d = (num/10) % 10; // 4th digit
    c = (num/100) % 10; // 3rd digit
    b = (num/1000) % 10; // 2nd digit
    a = (num/10000);    // 1st digit
    
    sum = a + b + c + d + e;
    printf("Sum of digits = %d\n", sum);
    return 0;
}