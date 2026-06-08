#include <stdio.h>
int palindrom(int n); // Function prototype

int palindrom(int n)
{
    int c, r, s = 0;
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (c == s)
        return 1;
    else
        return 0; // Function Defination
}

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    if (palindrom(n))
        printf("Palindrom number");
    else
        printf("Not");
    return 0;
} // Function call