#include <stdio.h>

int main() {
    // A string is an array of characters ending with '\0'
    char name[] = "Programming";
    int i = 0;

    printf("Printing character by character:\n");
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");

    // Printing the entire string at once
    printf("Printing using %%s format specifier: %s\n", name);

    return 0;
}