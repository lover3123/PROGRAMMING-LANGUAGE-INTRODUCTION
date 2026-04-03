/*
 * C program to find the area of a triangle using formula
 */
#include <stdio.h>
void main()
{
    float base,height;
    printf("Enter Base and Height: ");
    scanf("%f %f",&base,&height);
    float area = (base * height) / 2;
 
    //Area with precision of 2 decimal places
    printf("Area of Triangle is %0.2f",area);
}


/*
 * C program to find the area of a triangle using Heron's formula
 */
#include<stdio.h>
#include<math.h>
 
int main()
{
    float a, b, c, s, area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
 
    //Calculate area of triangle
    area = sqrt(s*(s-a)*(s-b)*(s-c));
 
    //Area with 2 digits of precision
    printf("\n Area of triangle: %.2f\n",area);
 
    return 0;
}


*
 * C program to find the area of a triangle using function
 */
#include<stdio.h>
#include<math.h>
 
//Function to calculate area
float calc_area(float a,float b,float c)
{
    float s = (a+b+c)/2;
 
    //Return area of triangle
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    float a, b, c, s, area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
 
    //Area with 2 digits of precision
    printf("\n Area of triangle: %.2f\n", calc_area(a,b,c));
    return 0;
}

/*
 * C program to find the area of a triangle using pointer
 */
#include<stdio.h>
#include<math.h>
 
// Function to calculate area
void calc_area(float a,float b,float c,float *area)
{
    float s = (a+b+c)/2;
 
    // Storing area at memory location of area by dereferencing it
    *area = sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    float a, b, c, area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
 
    // Calling function to calculate area
    calc_area(a,b,c,&area);
 
    //Area with 2 digits of precision
    printf("\n Area of triangle: %.2f\n",area);
 
    return 0;
}