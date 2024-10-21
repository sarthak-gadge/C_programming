#include<stdio.h>
void factorial();

void factorial()
{
    int n,i,f=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     printf("the factorial %d is %d",n,f);
}

int main()
{
    factorial();
    return 0;
}