#include <stdio.h>
int main()
{
    int i, num, x, sum, mem;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        num = i;
        mem = num;
    
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum = sum + x * x * x;
    }
    if (sum == mem)
    {
        printf("%d\n",mem);
    }
}
    return 0;
}