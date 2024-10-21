#include<stdio.h>
void squareofno();

void squareofno()
{
    int n,total;
    printf("enter a number");
    scanf("%d",&n);
    total=n*n;
    printf("square of number is:%d",total);
}

int main()
{
    squareofno();
    return 0;
}