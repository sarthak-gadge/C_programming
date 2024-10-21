#include<stdio.h>
int main()
{
    int f=1,n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        f=f*i;
        printf("\nthe factorial of %d is %d",n,f);
        i++;
    } while (i<=n);
    return 0;
    
}