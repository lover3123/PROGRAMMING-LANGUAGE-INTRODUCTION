#include <stdio.h>

int main() 
{
    int date = 5225 ;
    unsigned int year, month, day ;
    
    printf ( "\nDate = %d", date ) ;
    
    // Extracting bits using shifting logic
    year = 1980 + ( date >> 9 ) ;
    month = ( ( date << 7 ) >> 12 ) ;
    day = ( ( date << 11 ) >> 11 ) ;
    
    printf ( "\nYear = %u ", year ) ;
    printf ( "Month = %u ", month ) ;
    printf ( "Day = %u\n", day ) ;
    
    return 0;
}