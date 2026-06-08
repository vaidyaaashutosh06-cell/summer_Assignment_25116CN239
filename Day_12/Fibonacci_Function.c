#include <stdio.h>
void fibonacci(int n); // Funtion prototype

void fibonacci(int n)
{
    int x = 0, y = 1, z, i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", x);
        z = x + y;
        x = y;
        y = z; // Function Defination
    }
}
int main()
{
    int n;
    printf("Enter number of term:");
    scanf("%d", &n);
    fibonacci(n);
    return 0; // Function call
}