#include<stdio.h>
int main()
{
    int i,fac=1;
    printf("\nEnter number to find fac:");
    scanf("%d",&i);
    while(i>1)
    {
        fac=fac*i;
        i--;
    }
    printf("\nFactorial=%d",fac);
    return 0;
    
}