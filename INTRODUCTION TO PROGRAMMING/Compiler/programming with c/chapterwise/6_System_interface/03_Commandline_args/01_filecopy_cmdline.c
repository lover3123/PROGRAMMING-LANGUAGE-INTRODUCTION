#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[ ] )
{
    FILE *fs, *ft ;
    char ch ;
    
    // Check if exactly 3 arguments were passed (ProgramName, Source, Target)
    if ( argc != 3 )
    {
        puts ( "Improper number of arguments" ) ;
        exit( 1 ) ;
    }
    
    fs = fopen ( argv[1], "r" ) ;
    if ( fs == NULL )
    {
        puts ( "Cannot open source file" ) ;
        exit( 1 ) ;
    }
    
    ft = fopen ( argv[2], "w" ) ;
    if ( ft == NULL )
    {
        puts ( "Cannot open target file" ) ;
        fclose ( fs ) ;
        exit( 1 ) ;
    }
    
    while ( 1 )
    {
        ch = fgetc ( fs ) ;
        if ( ch == EOF )
            break ;
        else
            fputc ( ch, ft ) ;
    }
    
    fclose ( fs ) ;
    fclose ( ft ) ;
    return 0;
}