#include <stdio.h>

int main() {
    int *arr[3]; // Array of 3 integer pointers
    int i = 31, j = 5, k = 19, m;

    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;

    for (m = 0; m <= 2; m++) {
        // arr[m] prints the address, *(arr[m]) prints the value at that address
        printf("Pointer at arr[%d] points to value: %d\n", m, *(arr[m]));
    }

    return 0;
}