#include <stdio.h>

int main() {
    int avg, sum = 0;
    int i;
    int marks[5]; // Array declaration

    printf("Enter marks of 5 students:\n");
    for (i = 0; i <= 4; i++) {
        scanf("%d", &marks[i]); // Read data into the array
    }

    for (i = 0; i <= 4; i++) {
        sum = sum + marks[i];   // Read data from the array
    }

    avg = sum / 5;
    printf("Average marks = %d\n", avg);

    return 0;
}