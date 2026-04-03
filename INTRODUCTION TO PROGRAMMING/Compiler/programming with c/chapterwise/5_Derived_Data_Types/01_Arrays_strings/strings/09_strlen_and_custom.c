#include <stdio.h>
#include <string.h>

// Custom xstrlen function prototype
int xstrlen(char *s);

int main() {
    char arr[] = "Bamboozled";
    int len1, len2, len3;

    // Using Standard Library
    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");
    
    // Using Custom Function
    len3 = xstrlen(arr);

    printf("Standard - string = %s length = %d\n", arr, len1);
    printf("Standard - string = Humpty Dumpty length = %d\n", len2);
    printf("Custom   - string = %s length = %d\n", arr, len3);

    return 0;
}

int xstrlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return (length);
}