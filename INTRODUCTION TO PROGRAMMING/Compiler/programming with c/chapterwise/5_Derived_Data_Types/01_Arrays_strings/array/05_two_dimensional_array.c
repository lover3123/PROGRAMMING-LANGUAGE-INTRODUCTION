#include <stdio.h>

int main() {
    // 4 rows, 2 columns
    int stud[4][2] = {
        {1234, 56},
        {1212, 33},
        {1434, 80},
        {1312, 78}
    };
    int i, j;

    for (i = 0; i <= 3; i++) {
        printf("Row %d: ", i);
        for (j = 0; j <= 1; j++) {
            printf("%d\t", stud[i][j]);
        }
        printf("\n");
    }

    return 0;
}