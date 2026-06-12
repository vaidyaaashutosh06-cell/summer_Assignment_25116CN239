#include <stdio.h>
int main()
{
    int arr[100], n, i, j, maxfrequency = 0, maxelement;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxfrequency)
            
        {
            maxfrequency = count;
            maxelement = arr[i];
        }
    }

    printf("maximum frequency element=%d\n", maxelement);
    printf("frequency=%d", maxfrequency);
    return 0;
}