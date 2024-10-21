#include<stdio.h>
void cubeofno(int n);


void cubeofno(int n)
{
    int total;
    total = n*n*n;
    printf("cube of number is:%d",total);
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    cubeofno(n);
    return 0;
}