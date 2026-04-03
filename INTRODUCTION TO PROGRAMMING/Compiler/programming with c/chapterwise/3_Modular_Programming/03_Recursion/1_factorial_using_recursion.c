#include <stdio.h>

int rec(int x);

int main() {
    int a, fact;
    printf("Enter any number: ");
    scanf("%d", &a);
    
    fact = rec(a);
    printf("Factorial value = %d\n", fact);
    return 0;
}

int rec(int x) {
    int f;
    if (x == 1) // Base Case (Crucial to prevent Stack Overflow)
        return (1);
    else
        f = x * rec(x - 1); // Recursive Call
        
    return (f);
}