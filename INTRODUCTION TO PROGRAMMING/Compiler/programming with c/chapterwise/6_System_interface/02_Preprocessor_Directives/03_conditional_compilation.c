#include <stdio.h>

#define WINDOWS 1 // Try commenting this line out to see the output change

int main() {
    
#ifdef WINDOWS
    printf("Compiling code specific to Windows OS...\n");
#else
    printf("Compiling code for Linux/Mac OS...\n");
#endif

// #ifndef checks if a macro is NOT defined
#ifndef LINUX
    printf("Linux is not defined!\n");
#endif

    return 0;
}