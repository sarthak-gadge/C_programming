#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    int i=num;
    while(i!=0)
    {
        r=i%10;
        sum=sum+(r*r*r);
        i=i/10;
    }
    if(sum==num)
    printf("it is armstrong number",num);
    else
    printf("it is not armstrong number",num);
    return 0;
}