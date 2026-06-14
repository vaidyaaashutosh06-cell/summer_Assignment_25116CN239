#include<stdio.h>
int main()
{
    int i,sum=0,x;
    printf("\nEnter number to cheak:");
    scanf("%d",&i);x=i;
    while(i>0){
        sum=sum+(i%10)*(i%10)*(i%10);
        i=i/10;
        
    }
    if(sum==x){
    printf("\n Armstrong number");}
    else{
    printf("\n not Armstrong number");}
    return 0;

}