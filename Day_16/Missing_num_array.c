#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    int expectedsum, missing;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    expectedsum = (n + 1) * (n + 2) / 2;
    missing = expectedsum - sum;
    printf("missing number=%d", missing);
    return 0;
}