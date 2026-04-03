/* File-copy program which copies text, .com and .exe files */
#include <fcntl.h>
#include <sys/types.h> 
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h> // Usually needed for low level I/O functions in Windows/DOS

int main ( int argc, char *argv[ ] )
{
    char buffer[ 512 ], source [ 128 ], target [ 128 ] ;
    int inhandle, outhandle, bytes ;
    
    printf ( "\nEnter source file name: " ) ;
    gets ( source ) ;
    inhandle = open ( source, O_RDONLY | O_BINARY ) ;
    
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        exit( 1 ) ;
    }
    
    printf ( "\nEnter target file name: " ) ;
    gets ( target ) ;
    outhandle = open ( target, O_CREAT | O_BINARY | O_WRONLY, S_IWRITE ) ;
    
    if ( outhandle == -1 ) // Note: Corrected variable from 'inhandle' in the book
    {
        puts ( "Cannot open file" ) ;
        close ( inhandle ) ;
        exit( 1 ) ;
    }
    
    while ( 1 )
    {
        bytes = read ( inhandle, buffer, 512 ) ;
        if ( bytes > 0 )
            write ( outhandle, buffer, bytes ) ;
        else
            break ;
    }
    
    close ( inhandle ) ;
    close ( outhandle ) ;
    return 0;
}