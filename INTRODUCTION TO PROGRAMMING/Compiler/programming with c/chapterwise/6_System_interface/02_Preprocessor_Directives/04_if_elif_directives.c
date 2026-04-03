#include <stdio.h>

#define TEST 20

int main() {
    
#if TEST <= 10
    printf("Test value is 10 or less.\n");
#elif TEST <= 20
    printf("Test value is between 11 and 20.\n");
#else
    printf("Test value is greater than 20.\n");
#endif

    return 0;
}