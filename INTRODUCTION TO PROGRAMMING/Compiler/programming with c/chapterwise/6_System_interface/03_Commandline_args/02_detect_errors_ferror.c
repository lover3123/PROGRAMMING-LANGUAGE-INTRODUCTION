#include <stdio.h>
#include <stdlib.h>

int main( )
{
    FILE *fp ;
    char ch ;
    
    fp = fopen ( "TRIAL.TXT", "w" ) ;
    if ( fp == NULL ) {
        puts("Cannot open file");
        exit(1);
    }

    while ( !feof ( fp ) )
    {
        ch = fgetc ( fp ) ;
        
        if ( ferror( ) )
        {
            printf ( "Error in reading file\n" ) ;
            // Alternatively, the book suggests using: perror ( "TRIAL" ) ;
            break ;
        }
        else
            printf ( "%c", ch ) ;
    }
    
    fclose ( fp ) ;
    return 0;
}