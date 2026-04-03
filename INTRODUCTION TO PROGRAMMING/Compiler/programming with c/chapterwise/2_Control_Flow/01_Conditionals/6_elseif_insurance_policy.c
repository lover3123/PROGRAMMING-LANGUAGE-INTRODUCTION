#include <stdio.h>

int main() {
    char sex, ms;
    int age;
    
    printf("Enter age, sex (M/F), marital status (M/U): ");
    scanf("%d %c %c", &age, &sex, &ms);
    
    if (ms == 'M')
        printf("Driver is insured\n");
    else if (sex == 'M' && age > 30)
        printf("Driver is insured\n");
    else if (sex == 'F' && age > 25)
        printf("Driver is insured\n");
    else
        printf("Driver is not insured\n");
        
    return 0;
}