#include<stdio.h>
int main()
{
    int i=2,n,m=0,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n/2;
    while(i<=m)
    {
        if(n%i==0)
        flag=1;
        i++;
        break;
    }
    if (flag==0)
    printf("the no is prime");
    else
    printf("the no is not prime");
    return 0;
}