#include <stdio.h>
void main()
{
    int m, n, lcm;
    printf("\nEnter the value of m and n:");
    scanf("%d%d", &m, &n);
    if (m > n)
    {
        lcm = m;
    }
    else
    {
        lcm = n;
    }
    while (1)
    {
        if (lcm % m == 0 && lcm % n == 0)
        {
            printf("\nLCM of %d and %d is %d", m, n, lcm);
            break;
        }
        lcm++;
    }
}