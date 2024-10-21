#include<stdio.h>
int main()
{
    int num,rem,rev;
    printf("enter anumber");
    scanf("%d",&num);
    for(rev=0;num>0;num=num/10)
    {
        rem = num%10;
        rev = (rev*10)+rem;
    }
    printf("the reverse no is:%d",rev);
    return 0;
}