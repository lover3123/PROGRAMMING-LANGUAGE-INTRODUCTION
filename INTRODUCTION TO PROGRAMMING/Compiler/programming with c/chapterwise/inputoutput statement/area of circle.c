#include <stdio.h>

int main() {
    float rad, area;
    const float PI = 3.14159; // Using a constant with better precision

    printf("Enter the radius: ");
    scanf("%f", &rad);

    area = PI * rad * rad;

    printf("Area of the circle is: %.2f\n", area);

    return 0;
}