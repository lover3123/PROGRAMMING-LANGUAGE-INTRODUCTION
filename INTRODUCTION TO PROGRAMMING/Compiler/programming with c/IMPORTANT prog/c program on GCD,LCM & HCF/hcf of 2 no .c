/*
 * C program to find the HCF of two integers using While-loop
 */
#include<stdio.h>
 
void main()
{
    int num1, num2, hcf, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    hcf = denominator;
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
}



/*
 * C program to find the HCF of two integers using for-loop
 */
#include<stdio.h>
void main()
{
    int n1, n2, i, HCF;
 
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
 
    int min = (n1 < n2)? n1:n2;  // to find minimum of the two numbers.
 
    for(i=min; i >=1; --i)
    {
        // Checks if i divides both the integers
        if(n1%i==0 && n2%i==0)
        {
            HCF = i;
            break;
        }
    }
 
    printf("HCF of %d and %d is %d", n1, n2, HCF);
}



/*
 * C Program to find HCF of given Numbers using Recursion
 */
#include<stdio.h>
 
int HCF(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a, &b);
    result = HCF(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
}
 
int HCF(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return HCF(a - b, b);
        }
        else
        {
            return HCF(a, b - a);
        }
    }
    return a;
}



/*
 * C Program to find HCF of two Numbers using Euclidean Algorithm
 */
#include<stdio.h>
 
int HCF(int x, int y) {
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
int main(int argc, char **argv) {
    printf("Enter the two numbers: ");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The HCF of two numbers is: %d", HCF(x, y));
    return 0;
}



/*
 * C Program to find HCF of two Numbers using Recursive Euclidean Algorithm
 */
#include<stdio.h>
 
int HCF_algorithm(int a, int b)
{
    int x = (a > b) ? a : b; // a is greater number
    int y = (a < b) ? a : b; // b is smaller number
 
    if (y == 0) {
        return x;
    } else {
        return HCF_algorithm(y, (x % y));
    }
}
 
int main()
{
    int num1, num2, HCF;
    printf("\nEnter two numbers to find HCF using Euclidean algorithm: ");
    scanf("%d%d", &num1, &num2);
    HCF = HCF_algorithm(num1, num2);
 
    printf("The HCF of %d and %d is %d\n", num1, num2, HCF);
    return 0;
}