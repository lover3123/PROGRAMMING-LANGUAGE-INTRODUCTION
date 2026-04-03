#include <stdio.h>

int main() {
    // Array of pointers to string literals
    char *names[] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };
    int i;

    printf("List of names using array of pointers:\n");
    for (i = 0; i < 5; i++) {
        // names[i] holds the base address of the i-th string
        printf("%s\n", names[i]); 
    }

    /* * LIMITATION NOTE: 
     * You can reassign a pointer to point to a whole new string:
     * names[1] = "Robert"; // This is valid
     * * However, you CANNOT modify the characters of the original string:
     * // *names[1] = 'R'; // DANGEROUS: May cause a segmentation fault 
     * // because string literals are often stored in read-only memory.
     * * SOLUTION: If you need to manipulate the individual characters of the strings,
     * use a Two-Dimensional Array of Characters (like the previous program) instead.
     */

    return 0;
}