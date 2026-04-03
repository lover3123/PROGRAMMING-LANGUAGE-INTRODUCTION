/* File name: util.c */
#include <stdio.h>

int main( )
{
    char ch ;
    
    // Reads from standard input (keyboard or redirected file) 
    // and writes to standard output (screen or redirected file)
    while ( ( ch = getc ( stdin ) ) != EOF )
        putc ( ch, stdout ) ;
        
    return 0;
}