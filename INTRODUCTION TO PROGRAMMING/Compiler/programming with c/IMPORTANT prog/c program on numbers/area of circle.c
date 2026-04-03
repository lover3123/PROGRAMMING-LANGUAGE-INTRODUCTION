#include <stdio.h>
//Defining the value of pi upto 6 decimal places
#define pi 3.141592
int main()
{
    float radius;
    printf("Enter Radius of Circle:\n");
    scanf("%f",&radius);
 
    // Calculate the area of the circle
    float area=pi*radius*radius;
 
    // Print the area of the circle, rounded to two decimal places
    printf("The area of Circle with radius %0.2f is: %0.2f",radius,area);
    return 0;
}


*
 * C program to find the area of a circle, given the radius
 */
 
#include <stdio.h>
#include <math.h>
#define PI 3.142
 
void main()
{
    float radius, area;
 
    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("Area of a circle = %5.2f\n", area);
}