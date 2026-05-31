#include <stdio.h>
int main()
{
    int n, x=0, y=1, z;
    printf("Enter max limit:");
    scanf("%d", &n);
    while (x <= n)
    {
        printf("%d", x);
        z=x+y;
        x=y;
        y=z;
    }
    return 0;
}