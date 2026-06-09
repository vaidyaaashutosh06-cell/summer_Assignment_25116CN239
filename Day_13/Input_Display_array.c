#include <stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);//For input
    }
    printf("Array elements are :\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d :\n", arr[i]);//For Display
    }
    return 0;
}