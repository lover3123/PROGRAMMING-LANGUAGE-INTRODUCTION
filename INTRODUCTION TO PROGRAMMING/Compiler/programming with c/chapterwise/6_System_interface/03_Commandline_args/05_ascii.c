/* File name: ascii.c*/
#include <stdio.h>

int main( )
{
    int ch ;
    for ( ch = 0 ; ch <= 255 ; ch++ )
        printf ( "\n%d %c", ch, ch ) ;
        
    return 0;
}