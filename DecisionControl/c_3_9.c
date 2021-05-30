#include <stdio.h>
int main()
{
    char entry;
    printf("Enter any alphabet or special character: ");
    scanf("%c", &entry);

    if (entry >= 65 && entry <= 90)
        printf("CAPITAL LETTER");

    else if (entry >= 97 && entry <= 122)
        printf("LOWERCASE LETTER");

    else if (entry >= 0 && entry <= 9)
        printf("DIGIT");
}
