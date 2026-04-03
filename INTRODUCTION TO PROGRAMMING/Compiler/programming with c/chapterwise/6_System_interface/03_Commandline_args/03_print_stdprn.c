/* Prints file contents on printer */
#include <stdio.h>
#include <stdlib.h>

int main( )
{
    FILE *fp ;
    char ch ;
    
    fp = fopen ( "poem.txt", "r" ) ;
    if ( fp == NULL )
    {
        printf ( "Cannot open file" ) ;
        exit( 1 ) ;
    }
    
    while ( ( ch = fgetc ( fp ) ) != EOF )
        fputc ( ch, stdprn ) ; /* stdprn writes directly to the standard printer */

    fclose ( fp ) ;
    return 0;
}