#include <stdio.h>
#include <string.h>

int main() {
    // strcat example
    char source[] = "Folks!";
    char target[30] = "Hello";
    
    strcat(target, source);
    printf("strcat target string = %s\n\n", target);

    // strcmp example
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i, j, k;

    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");

    printf("strcmp results: %d %d %d\n", i, j, k);

    return 0;
}