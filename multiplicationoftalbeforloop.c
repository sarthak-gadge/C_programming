#include<stdio.h>
int main()
{
    int n,i,multi;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multi=n*i;
        printf("\n%d * %d = %d",n,i,multi);
    }
    
    return 0;

}