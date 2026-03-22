/* 
check whether a number is even or odd 
using if-else statement and modulus operator 
*/

#include <stdio.h>
void main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0) 
      printf("%d is even number.", n);
    else 
      printf("%d is odd number.", n);

    }
}

/* using terrinary operator */ */
    (n % 2 == 0) ? printf("%d is even number.", n) : printf("%d is odd number.", n);



/* using bitwise operator */
    (n & 1) ? printf("%d is odd number.", n) : printf("%d is even number.", n);
}