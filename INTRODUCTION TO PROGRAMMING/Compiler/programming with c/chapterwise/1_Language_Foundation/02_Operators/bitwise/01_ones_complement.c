#include <stdio.h>

void showbits(int n);

int main() 
{
    int j, k ;
    for ( j = 0 ; j <= 3 ; j++ )
    {
        printf ( "\nDecimal %d is same as binary ", j ) ;
        showbits ( j ) ;
        
        k = ~j ; // One's complement operator
        
        printf ( "\nOne's complement of %d is ", j ) ;
        showbits ( k ) ;
    }
    printf("\n");
    return 0;
}

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