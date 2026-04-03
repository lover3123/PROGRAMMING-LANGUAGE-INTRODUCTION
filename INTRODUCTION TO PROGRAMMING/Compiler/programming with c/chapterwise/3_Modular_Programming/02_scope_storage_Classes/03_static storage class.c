#include <stdio.h>

void increment(void);

int main() {
    increment();
    increment();
    increment();
    return 0;
}

void increment(void) {
    auto int i = 1;
    static int j = 1; // Initialized only once!
    
    i = i + 1;
    j = j + 1;
    
    printf("Auto = %d, Static = %d\n", i, j); 
    // Output will be:
    // Auto = 2, Static = 2
    // Auto = 2, Static = 3
    // Auto = 2, Static = 4
}