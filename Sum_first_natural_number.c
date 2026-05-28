#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        sum +=i;
    }
    printf("sum of natural numbers up to %d is:%d\n",n,sum);
    return 0;   
}