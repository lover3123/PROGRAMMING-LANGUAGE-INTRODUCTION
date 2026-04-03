#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Replaced outdated "alloc.h" with standard stdlib.h

int main() {
    char *names[6];
    char n[50];
    int len, i;
    char *p;

    for (i = 0; i <= 5; i++) {
        printf("Enter name: ");
        scanf("%s", n);
        
        len = strlen(n);
        p = (char*) malloc(len + 1); // Added typecast for modern C/C++
        strcpy(p, n);
        names[i] = p;
    }

    printf("\nNames entered:\n");
    for (i = 0; i <= 5; i++) {
        printf("%s\n", names[i]);
    }

    // Best practice: Free dynamically allocated memory (not in the original book but highly recommended!)
    for(i = 0; i <= 5; i++) {
        free(names[i]);
    }

    return 0;
}