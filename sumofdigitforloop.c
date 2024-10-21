#include<stdio.h>
int main()
{
    int num,rem,sum;
    printf("enter a number");
    scanf("%d",&num);
    for(sum=0;num>0;num=num/10)
    {
        rem=num%10;
        sum=sum+rem;
    }
    printf("the sum is:%d",sum);
    return 0;
}