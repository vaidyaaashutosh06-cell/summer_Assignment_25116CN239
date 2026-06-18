#include <stdio.h>
int main()
{
    char str[100], i, count = 1;
    printf("Enter a sentence:");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Total words = %d", count);
    return 0;
}