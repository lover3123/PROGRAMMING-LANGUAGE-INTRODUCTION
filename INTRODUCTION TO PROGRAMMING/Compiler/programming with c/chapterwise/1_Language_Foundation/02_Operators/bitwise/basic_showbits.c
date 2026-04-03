#include <stdio.h>

// Function prototype
void showbits(int n);

int main() 
{
    int j ;
    // Corrected the typo 'j <<= 5' to 'j <= 5'
    for ( j = 0 ; j <= 5 ; j++ ) 
    {
        printf ( "\nDecimal %d is same as binary ", j ) ;
        showbits ( j ) ;
    }
    printf("\n");
    return 0;
}

// Function to print the binary representation of a 16-bit integer
void showbits(int n) 
{
    int i, k, andmask ;
    for ( i = 15 ; i >= 0 ; i-- )
    {
        andmask = 1 << i ;
        k = n & andmask ;
        k == 0 ? printf ( "0" ) : printf ( "1" ) ;
    }
}