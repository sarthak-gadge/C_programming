#include<stdio.h>
int main()
{
    int f=1,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nthe factorial of%d is %d",n,f);
    return 0;

}