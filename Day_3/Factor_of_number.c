#include <stdio.h>
int main()
{
    int n, f = 1, i;
    printf("Enter any nuber:");
    scanf("%d", &n);
    for (i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            ++f;
        }
        printf("count:%d\n", f);
    }
    return 0;
}