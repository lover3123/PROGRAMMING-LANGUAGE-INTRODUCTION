/* To test whether a bit in a number is ON or OFF */
#include <stdio.h>

int main() 
{
    int i = 65, j ;
    printf ( "\nvalue of i = %d", i ) ;
    
    // Check if the 5th bit (32) is on
    j = i & 32 ;
    if ( j == 0 )
        printf ( "\nand its fifth bit is off" ) ;
    else
        printf ( "\nand its fifth bit is on" ) ;
        
    // Check if the 6th bit (64) is on
    j = i & 64 ;
    if ( j == 0 )
        printf ( "\nwhereas its sixth bit is off\n" ) ;
    else
        printf ( "\nwhereas its sixth bit is on\n" ) ;
        
    return 0;
}