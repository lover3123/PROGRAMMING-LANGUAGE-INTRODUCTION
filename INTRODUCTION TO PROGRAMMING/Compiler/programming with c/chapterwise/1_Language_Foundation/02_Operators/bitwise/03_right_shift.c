#include <stdio.h>

void showbits(int n);

int main() 
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as binary ", i ) ;
    showbits ( i ) ;
    
    for ( j = 0 ; j <= 5 ; j++ )
    {
        k = i >> j ; // Right shift operator
        printf ( "\n%d right shift %d gives ", i, j ) ;
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