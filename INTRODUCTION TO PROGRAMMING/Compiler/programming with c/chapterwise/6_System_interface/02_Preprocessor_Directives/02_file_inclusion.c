// A custom header file containing a macro and a simple function prototype
#define GREETING "Welcome to C Programming!"

void printGreeting() {
    printf("%s\n", GREETING);
}


#include <stdio.h>
// Use double quotes for custom header files in the same directory
#include "myfunctions.h" 

int main() {
    // Calling the function defined in myfunctions.h
    printGreeting(); 
    return 0;
}