/* 
c program to find the largest of the three numbers 
*/

#include <stdio.h>

int main() {
     int a, b, c;
     printf("enter three numbers : \n: ");
     scanf("%d", &a);
     printf("b: ");
     scanf("%d", &b);
     printf("c: ");
     if ( a> b && a > c)
        printf("Biggest number is %d", a);
    if (b > a && b > c)
        printf("Biggest number is %d", b);
    if (c > a && c > b)
        printf("Biggest number is %d", c);

        return 0;

}

/* using  if-else statement */
/* 
c program to  find the biggest of three numbers usign if else statement 
    */

    #include <stdio.h>
     
    void main()
    {
        int num1,num2,num3;

        printf("enter the values of num1, num2 and num3\n);
            scanf(%d %d %d", &num1, &num2, &num3);
            ");

        printf("num1 = %d\tnum2 =%d\num3 = %d\n", num1 , num2, num3);
        if(num1 > num3)
        {
        printf(" %d is the largest number.".num1);
        }
        else if(num2 > num3)
              printf(" %d is the largest number.", num2);
        else
              printf(" %d is the largest number.", num3);       
        }
    }


    /* using ternary operator */
    #include <stdio.h>                      

    int main(void)
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("Largest of three numbers is %d", a > b ? (a > c ? a : c) : (b > c ? b : c));
    return 0;
}