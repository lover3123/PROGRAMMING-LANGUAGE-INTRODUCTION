#include <stdio.h>

int main() {
    int i = 3;
    int *j; // j is a pointer to an integer
    
    j = &i; // j now holds the memory address of i
    
    printf("Address of i = %p\n", (void*)&i);
    printf("Address of i = %p\n", (void*)j);
    printf("Address of j = %p\n", (void*)&j);
    
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j); // Dereferencing j
    
    return 0;
}