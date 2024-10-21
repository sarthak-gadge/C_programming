#include<stdio.h>
int main()
{
    int i,n,m=0,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
      if(flag==0)
        printf("it is prime");
        else
        printf("it is not prime");
    return 0;
}