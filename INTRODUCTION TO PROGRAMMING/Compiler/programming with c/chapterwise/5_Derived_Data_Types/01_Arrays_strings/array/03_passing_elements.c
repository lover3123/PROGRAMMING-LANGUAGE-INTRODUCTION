#include <stdio.h>

void display_value(int m);
void display_reference(int *n);

int main() {
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for (i = 0; i <= 6; i++) {
        display_value(marks[i]);       // Call by value
    }
    printf("\n");
    
    for (i = 0; i <= 6; i++) {
        display_reference(&marks[i]);  // Call by reference
    }
    printf("\n");

    return 0;
}

void display_value(int m) {
    printf("%d ", m);
}

void display_reference(int *n) {
    printf("%d ", *n);
}