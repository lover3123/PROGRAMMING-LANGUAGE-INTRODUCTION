#include <stdio.h>

int main() {
    char name[25];
    char fullname[25];

    // Method 1: scanf (cannot accept spaces)
    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Hello %s!\n\n", name);

    // Clear the input buffer before using gets
    while (getchar() != '\n'); 

    // Method 2: gets and puts (accepts spaces)
    printf("Enter your full name: ");
    gets(fullname); // Note: modern compilers will warn that gets() is unsafe
    puts("Hello!");
    puts(fullname);

    return 0;
}