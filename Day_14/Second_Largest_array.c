#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int largest, second;
    printf("Enter number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    second = -9999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }
    printf("Second largest number=%d", second);
    return 0;
}
