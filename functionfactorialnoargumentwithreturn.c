#include<stdio.h>
int factorial();

int factorial()
{
    int i,n,f=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int result;
    result = factorial();
    printf("the factorial is:%d",result);
    return 0;
}