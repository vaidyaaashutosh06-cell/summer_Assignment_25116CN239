#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter n:");
    if (n == 0)
    {
        printf("Nth fibonacci number =%d", a);
    }
    else if (n == 1)
    {
        printf("Nth fibonacci number=%d", b);
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth fibonacci number=%b", b);
    }
    return 0;
}