#include <stdio.h>

int main() {
    int i;
    printf("Enter a value between 1 and 3: ");
    scanf("%d", &i);
    
    switch (i) {
        case 1:
            printf("I am in case 1\n");
            break;
        case 2:
            printf("I am in case 2\n");
            break;
        case 3:
            printf("I am in case 3\n");
            break;
        default:
            printf("I am in default\n");
    }
    return 0;
}