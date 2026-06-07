#include <stdio.h>
int factorial(int n); // Funtion prototype

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact; // Function Defination
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Factorial=%d",factorial(n));
    return 0;//Funtion call
}