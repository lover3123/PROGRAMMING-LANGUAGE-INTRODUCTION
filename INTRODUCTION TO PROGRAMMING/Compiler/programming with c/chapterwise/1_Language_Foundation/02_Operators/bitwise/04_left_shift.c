#include <stdio.h>

void showbits(int n);

int main() 
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as ", i ) ;
    showbits ( i ) ;
    
    for ( j = 0 ; j <= 4 ; j++ )
    {
        k = i << j ; // Left shift operator
        printf ( "\n%d left shift %d gives ", i, j ) ;
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