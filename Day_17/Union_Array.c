
#include <stdio.h>
int main()
{
    int a[20], b[20], n1, n2, i, j, flag;
    printf("Enter size of first array:");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array:");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Union Array:");
    for (i = 0; i < n1; i++)
    {

        printf("%d ", a[i]);
    }
    for (i = 0; i < n2; i++)
    {

        flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}