*
* C program to read two integers M and N and to swap their values.
* Use a user-defined function for swapping by accepting the addresses of the two variables.
* Output the values of M and N before and after swapping.
*/
 
#include <stdio.h>
 
/*  Function swap - to interchanges the contents of two items */
 
void swap(float *ptr1, float *ptr2)
{
    // Step 4. Create a temporary variable for storing the values
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
 
int main(void)
{
    float m, n;
    // Step 1. Take user input
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    // Step 2. Show the values before passing their addresses to the function
    printf("Before swapping : M = %5.2f\tN = %5.2f\n", m, n);
    // Step 3. Pass the addresses to the function
    swap(&m, &n);
    // Step 5. Print the values after the swap function has executed
    printf("After swapping : M  = %5.2f\tN = %5.2f\n", m, n);
}


/*
 * C Program to Swap two Integers without using Temporary Variables
 * and Bitwise Operations
 */
#include <stdio.h>
 
// function to swap the two numbers
void swap(float *ptr1, float *ptr2)
{
    // Step 4. As ptr1 gets the sum of both, in the next step obviously ptr2 
    // gets the difference of the sum and ptr2 which is ptr1
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}
 
int main(void)
{
    float m, n;
    // Step 1. Take user input
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    // Step 2. Show the values before passing their addresses to the function
    printf("Before swapping : \t M = %5.2f\tN = %5.2f\n", m, n);
    // Step 3. Pass the addresses to the function
    swap(&m, &n);
    // Step 5. Print the values after the swap function has executed
    printf("After swapping : \t M  = %5.2f\tN = %5.2f\n", m, n);
}

/*
* C program to read two integers M and N and to swap their values.
* Use a user-defined function for swapping by accepting the addresses of the two variables.
* Output the values of M and N before and after swapping.
*/
 
#include <stdio.h>
 
/*  Function swap - to interchanges the contents of two items */
 
void swap(long *ptr1, long *ptr2)
{
    // Step 4. Performing XOR operation on the values
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}
 
int main(void)
{
    long m, n;
    // Step 1. Take user input
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%ld", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%ld", &n);
    // Step 2. Show the values before passing their addresses to the function
    printf("Before swapping : M = %5ld\tN = %5ld\n", m, n);
    // Step 3. Pass the addresses to the function
    swap(&m, &n);
    // Step 5. Print the values after the swap function has executed
    printf("After swapping : M  = %5ld\tN = %5ld\n", m, n);
}


/*
* C program to read two integers M and N and to swap their values.
* Use a user-defined function for swapping by accepting the addresses of the two variables.
* Output the values of M and N before and after swapping.
*/
 
#include <stdio.h>
 
/*  Function swap - to interchanges the contents of two items */
 
void swap(long *ptr1, long *ptr2)
{
    // Step 4. Performing XOR operation on the values
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}
 
int main(void)
{
    long m, n;
    // Step 1. Take user input
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%ld", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%ld", &n);
    // Step 2. Show the values before passing their addresses to the function
    printf("Before swapping : M = %5ld\tN = %5ld\n", m, n);
    // Step 3. Pass the addresses to the function
    swap(&m, &n);
    // Step 5. Print the values after the swap function has executed
    printf("After swapping : M  = %5ld\tN = %5ld\n", m, n);
}



/*
 * C program to swap the contents of two numbers using bitwise XOR operation.
 * Don't use either the temporary variable or arithmetic operators.
 */
#include <stdio.h>
 
void main()
{
    long i, k;
 
    printf("Enter two integers \n");
    scanf("%ld %ld", &i, &k);
    printf("\n Before swapping i= %ld and k = %ld", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\n After swapping i= %ld and k = %ld", i, k);
}