#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (a, b, or c): ");
    scanf(" %c", &ch);
    
    switch (ch) {
        case 'a':
        case 'A':
            printf("Apple\n");
            break;
        case 'b':
        case 'B':
            printf("Bat\n");
            break;
        case 'c':
        case 'C':
            printf("Cat\n");
            break;
        default:
            printf("Not a, b, or c\n");
    }
    return 0;
}