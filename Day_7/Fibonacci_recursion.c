#include <stdio.h>
int fibo(int n)
{
    return n <= 1 ? n : fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibo(i));
    }

    return 0;
}
