#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][50], temp[50];
    int n, i, j;
    printf("Enter number of names:");
    scanf("%d", &n);
    printf("Enter names:");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(name[i]) > strlen(name[j]))
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Names sorted Alphabetical order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}
