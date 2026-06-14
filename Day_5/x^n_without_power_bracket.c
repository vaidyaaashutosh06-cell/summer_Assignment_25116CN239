#include <stdio.h>
int main()
{
    int x, n, i, result = 1;
    printf("Entre value of x and n:");
    scanf("%d %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("x^n=%d", result);
    return 0;
}