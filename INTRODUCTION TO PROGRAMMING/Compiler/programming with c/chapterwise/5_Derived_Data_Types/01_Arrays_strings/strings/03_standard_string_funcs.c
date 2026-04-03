#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Apple";
    char str2[50] = "Banana";
    char str3[50];
    int len, comparison;

    // 1. strlen() - Find length
    len = strlen(str1);
    printf("Length of '%s' is %d\n", str1, len);

    // 2. strcpy() - Copy str1 into str3
    strcpy(str3, str1);
    printf("After strcpy, str3 contains: %s\n", str3);

    // 3. strcat() - Concatenate str2 to the end of str1
    strcat(str1, " and ");
    strcat(str1, str2);
    printf("After strcat, str1 contains: %s\n", str1);

    // 4. strcmp() - Compare two strings
    comparison = strcmp("Apple", "Banana");
    if (comparison == 0)
        printf("Strings are equal.\n");
    else if (comparison < 0)
        printf("'Apple' comes before 'Banana' alphabetically.\n");
    else
        printf("'Apple' comes after 'Banana' alphabetically.\n");

    return 0;
}