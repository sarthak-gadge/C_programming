#include<stdio.h>
int main()
{
    int n,i=1,multi;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        multi=n*i;
        printf("\n%d *%d =%d",n,i,multi);
        i++;
    }while(i<=10);
   
}