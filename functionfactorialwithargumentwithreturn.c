#include<stdio.h>
int factorial(int n);

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=factorial(n);
    printf("the factorial is:%d",result);
    return 0;
}