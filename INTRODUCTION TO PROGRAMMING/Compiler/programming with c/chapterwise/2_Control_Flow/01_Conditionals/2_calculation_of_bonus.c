#include <stdio.h>

int main() {
    int bonus, cy, joy, yr_of_ser;
    printf("Enter current year and year of joining: ");
    scanf("%d %d", &cy, &joy);
    
    yr_of_ser = cy - joy;
    
    if (yr_of_ser > 3) {
        bonus = 2500;
        printf("Bonus = Rs. %d\n", bonus);
    }
    return 0;
}