#include <stdio.h>

void display(int *j, int n);

int main() {
    int num[] = {24, 34, 12, 44, 56, 17};
    
    // Passing the base address (num) and the size of the array
    display(num, 6); 

    return 0;
}

// j holds the base address of the array
void display(int *j, int n) { 
    int i;
    for (i = 0; i <= n - 1; i++) {
        printf("element = %d\n", *j);
        j++; // Increment pointer to point to the next integer
    }
}