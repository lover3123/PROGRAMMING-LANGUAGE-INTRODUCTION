#include <stdio.h>

int main() {
    char name[] = "Klinsman";
    int i = 0;
    char *ptr;

    printf("Method 1 (Hardcoded length):\n");
    while (i <= 7) {
        printf("%c", name[i]);
        i++;
    }
    printf("\n\n");

    printf("Method 2 (Using null character '\\0'):\n");
    i = 0;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
    printf("\n\n");

    printf("Method 3 (Using pointers):\n");
    ptr = name; /* store base address of string */
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n\n");

    printf("Method 4 (Using %%s in printf):\n");
    printf("%s\n", name);

    return 0;
}