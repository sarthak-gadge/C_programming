#include<stdio.h>
void squareofno(int n);

void squareofno(int n)
{
    int total;
    total = n*n;
    printf("squareof number is:%d",total);
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    squareofno(n);
    return 0;
}

