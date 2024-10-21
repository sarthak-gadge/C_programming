#include<stdio.h>
int main()
{
    int i=1,n,multi;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=10)
    {
        multi=n*i;
        printf("\n%d * %d = %d",n,i,multi);
        i++;
    }
    return 0;
}