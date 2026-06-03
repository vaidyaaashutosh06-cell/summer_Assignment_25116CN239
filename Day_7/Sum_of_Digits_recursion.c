#include <stdio.h>
int sumofdigits(int num);

int main()
{
    int num;
    printf("Enter a valid integer value:");
    scanf("%d", &num);
    int sum = sumofdigits(num);
    printf("\n the sum of digits is:%d", sum);
    return 0;
}
int sumofdigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumofdigits(num / 10);
}