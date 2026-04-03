#include <stdio.h>

// Simple Macro Expansion
#define PI 3.141592
#define AND &&
#define OR ||

// Macros with Arguments
#define AREA(x) (PI * x * x)
#define IS_UPPER(x) (x >= 'A' AND x <= 'Z')
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    float r = 6.25;
    char ch = 'M';
    int num1 = 10, num2 = 20;

    printf("Area of circle = %f\n", AREA(r));

    if (IS_UPPER(ch)) {
        printf("%c is an uppercase letter\n", ch);
    }

    printf("Maximum of %d and %d is %d\n", num1, num2, MAX(num1, num2));

    return 0;
}