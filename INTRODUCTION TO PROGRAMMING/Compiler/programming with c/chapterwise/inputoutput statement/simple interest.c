#include <stdio.h>
#include <math.h>

int main() {
    float p, t, r, si, ci;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Time duration (in years): ");
    scanf("%f", &t);

    printf("Enter Rate of interest: ");
    scanf("%f", &r);

    // Calculate Simple Interest
    si = (p * t * r) / 100.0;
    printf("\nThe Simple Interest is: %.2f\n", si);

    // Calculate Compound Interest
    ci = p * pow((1.0 + r / 100.0), t) - p;
    printf("The Compound Interest is: %.2f\n", ci);

    return 0;
}