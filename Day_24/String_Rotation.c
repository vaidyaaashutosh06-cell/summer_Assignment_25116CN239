#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    printf("Enter first string:");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2))
    {
        printf("Not string rotation.\n");
        return 0;
    }
    strcpy(temp, str1);
    strcpy(temp, str2);
    if (strstr(temp, str2))
    {
        printf("String is a rotation.\n");
    }
    else
    {
        printf("String i not a rotation.\n");
    }
    return 0;
}