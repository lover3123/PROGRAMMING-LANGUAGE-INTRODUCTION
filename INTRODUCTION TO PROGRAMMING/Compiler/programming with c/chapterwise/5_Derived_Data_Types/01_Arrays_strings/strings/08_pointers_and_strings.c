#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[10];
    char *s = "Good Morning";
    char *q;
    char *p = "Hello";

    // str2 = str1; /* ERROR: Cannot assign array to array */
    q = s;          /* WORKS: Can assign pointer to pointer */
    
    // str1 = "Bye"; /* ERROR: Cannot reinitialize a character array */
    p = "Bye";       /* WORKS: Can reassign a char pointer to a new string literal */

    printf("Pointer q: %s\n", q);
    printf("Pointer p: %s\n", p);

    return 0;
}