#include <stdio.h>
int sum(int a, int b)//Funtion prototype
{
    return a + b; // Function Defination
}
int main()
{
    int num1, num2;
    printf("Enter two numbers:");//Function call
    scanf("%d %d", &num1, &num2);
    printf("Sum= %d", sum(num1,num2));
    return 0;
}