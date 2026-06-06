#include <stdio.h>
int main()
{
    int i, j, k, l, m;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        m ='A';
        for (k = 1; k <= i; k++)
        {
            printf("%c", m++);
        }
        m = m - 2;
        for (l = 1; l < i; l++)
        {
            printf("%c", m--);
        }
        printf("\n");
    }
    return 0;
}