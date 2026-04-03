#include <stdio.h>

int i = 10; // Global (External) Variable

void display(void);

int main() {
    printf("i in main = %d\n", i);
    display();
    return 0;
}

void display(void) {
    i = i + 5; // Modifies the global variable directly
    printf("i in display = %d\n", i);
}