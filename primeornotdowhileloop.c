#include<stdio.h>
int main()
{
    int i=2,n,m=0,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        flag=1;
        i++;
        break;
    }while(i<=m);
    if(flag==0)
    printf("it is prime");
    else 
    printf("it is not prime");
    return 0;

}