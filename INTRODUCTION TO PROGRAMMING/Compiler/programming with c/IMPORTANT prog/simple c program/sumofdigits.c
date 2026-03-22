/* C program to find sum of digits of a number */
 
#include <stdio.h>
 
int main(void)
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is %d", sum);
    return 0;
}

/* Find the sum of digits recursively */
 
#include <stdio.h>
 
long sum_of_digits_recur(long n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sum_of_digits_recur(n / 10);
}
 
int main(void)
{
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Sum of digits of the number is %ld", sum_of_digits_recur(n));
    return 0;
}

/* Find the sum of digits of a number using a separate function */
 
#include <stdio.h>
 
long sum_of_digits(long n)
{
    long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main(void)
{
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Sum of digits of the number is %ld", sum_of_digits(n));
    return 0;
}



/* C program to find sum of digits of a number taken as a string */
 
#include <stdio.h>
#include <string.h>
 
int sum(char *str)
{
    int sum = 0;
    size_t i;
    size_t l = strlen(str);
    for (i = 0; i < l; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + (str[i] - '0');
        }
    }
    return sum;
}
 
int main(void)
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("The sum of digits of numbers in the string is: %d", sum(str));
    return 0;
}