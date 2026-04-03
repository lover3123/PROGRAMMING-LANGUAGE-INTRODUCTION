#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            printf("Not a prime number\n");
            break; // Stop loop once a factor is found
        }
    }
    
    if (i == num)
        printf("Prime number\n");
        
    return 0;
}