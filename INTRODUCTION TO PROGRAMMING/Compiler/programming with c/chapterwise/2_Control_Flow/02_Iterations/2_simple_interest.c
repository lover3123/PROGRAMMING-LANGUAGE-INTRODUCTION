#include <stdio.h>

int main() {
    int p, n, count;
    float r, si;
    
    count = 1; // Initialization
    while (count <= 10) { // Condition
        printf("Enter values of p, n, and r: ");
        scanf("%d %d %f", &p, &n, &r);
        
        si = p * n * r / 100;
        printf("Simple Interest = Rs. %f\n", si);
        
        count = count + 1; // Increment
    }
    return 0;
}