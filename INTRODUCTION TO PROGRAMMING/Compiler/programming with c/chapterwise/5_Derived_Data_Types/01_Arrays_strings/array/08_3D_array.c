#include <stdio.h>

int main() {
    // 2 blocks, 3 rows per block, 4 columns per row
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    int i, j, k;

    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 2; j++) {
            for (k = 0; k <= 3; k++) {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n"); // Separate the blocks visually
    }

    return 0;
}