#include <stdio.h>

int main() {
    char str[] = "Hello World";
    char *ptr;

    ptr = str; // Pointer to the base address of the string

    printf("Navigating string using a pointer:\n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++; // Move the pointer to the next character
    }
    printf("\n");

    return 0;
}