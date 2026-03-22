/*
 * C program to add two numbers
 */
 
#include <stdio.h>
 
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
 
    //Input Two Numbers
    scanf("%d %d",&a,&b);
    int sum=a+b;
 
    //print sum
    printf("Sum of %d and %d is: %d ",a,b,sum);
 
    return 0;
}

/*
 * C program to add two numbers using function
 */
 
#include <stdio.h>
//Declare a function to add two numbers
int add(int a,int b)
{
    //returning addition
    return a+b;
}
 
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
 
    //Input Two Numbers
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
 
    //print sum
    printf("Addition of %d and %d is: %d ",a,b,sum);
    return 0;

    /*
 * C program to add two numbers without using add operator
 */
 
#include <stdio.h>
 
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
 
    //Input Two Numbers
    scanf("%d %d",&a,&b);
    int sum=a;
 
    //Incrementing b to a
    for(int i=0;i<b;i++)
    sum++;
 
    //print sum
    printf("Sum of %d and %d is: %d ",a,b,sum);
    return 0;
}