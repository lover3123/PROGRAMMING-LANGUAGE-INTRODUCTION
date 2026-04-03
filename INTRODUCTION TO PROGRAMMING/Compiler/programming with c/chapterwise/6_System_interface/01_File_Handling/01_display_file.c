/* Display contents of a file on screen. */
#include <stdio.h>
#include <stdlib.h> // Added for modern compilers

int main( )
{
    FILE *fp ;
    char ch ;

    fp = fopen ( "PR1.C", "r" ) ;
    if (fp == NULL) {
        puts("Cannot open file");
        exit(1);
    }
    
    while ( 1 )
    {
        ch = fgetc ( fp ) ;
        if ( ch == EOF )
            break ;
        printf ( "%c", ch ) ;
    }
    fclose ( fp ) ;
    return 0;
}