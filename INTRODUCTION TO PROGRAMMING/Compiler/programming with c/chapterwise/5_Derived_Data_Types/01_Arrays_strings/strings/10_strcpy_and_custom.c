#include <stdio.h>
#include <string.h>

// Custom xstrcpy function prototype (using const as suggested in the text)
void xstrcpy(char *t, const char *s);

int main() {
    char source[] = "Sayonara";
    char target1[20];
    char target2[20];

    // Using Standard Library
    strcpy(target1, source);
    
    // Using Custom Function
    xstrcpy(target2, source);

    printf("source string = %s\n", source);
    printf("target string (strcpy)  = %s\n", target1);
    printf("target string (xstrcpy) = %s\n", target2);

    return 0;
}

void xstrcpy(char *t, const char *s) {
    while (*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}