#include<stdio.h>
int squareofno();

int squareofno()
{
    int n,total;
    printf("enter a number");
    scanf("%d",&n);
    total=n*n;
    return total;
}

int main()
{
    int result;
    result=squareofno();
    printf("square is:%d",result);
    return 0;
}