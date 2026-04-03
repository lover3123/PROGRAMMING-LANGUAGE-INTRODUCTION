#include <stdio.h>

int main() {
    char ch = 291; 
    // 291 is beyond the 0-255 range of an 8-bit char.
    // C drops the extra bits. 291 % 256 = 35. 
    // ASCII 35 is '#'
    
    printf("Character is: %c\n", ch); 
    printf("Underlying integer is: %d\n", ch);
    return 0;
}