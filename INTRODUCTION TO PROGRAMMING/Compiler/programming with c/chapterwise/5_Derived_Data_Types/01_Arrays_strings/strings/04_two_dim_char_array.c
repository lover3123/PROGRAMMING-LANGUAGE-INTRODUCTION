#include <stdio.h>
#include <string.h>

int main() {
    // An array capable of holding 5 strings, each up to 9 characters long (plus '\0')
    char masterList[5][10] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };
    char yourName[10];
    int i, flag = 0;

    printf("Enter your name: ");
    scanf("%s", yourName);

    for (i = 0; i < 5; i++) {
        if (strcmp(&masterList[i][0], yourName) == 0) {
            printf("Welcome, you are allowed to enter!\n");
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Sorry, you are a trespasser.\n");
    }

    return 0;
}