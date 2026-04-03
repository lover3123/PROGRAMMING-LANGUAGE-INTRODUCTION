#include <stdio.h>

// Function Declarations (Prototypes)
void message(void);

int main() {
    printf("I am in main\n");
    message(); // Function Call
    printf("I am finally back in main\n");
    return 0;
}

// Function Definition
void message(void) {
    printf("I am inside the message function\n");
}