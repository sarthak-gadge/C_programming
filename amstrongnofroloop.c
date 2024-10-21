#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=num;i!=0;i=i/10)
    {
        r = i%10;
        sum = sum +(r*r*r);
    }
    if(sum==num)
    printf("%d is an armstrong number",num);
    else
    printf("%d is it not armstrong number",num);
    return 0;

}