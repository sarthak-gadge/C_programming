#include<stdio.h>
void cubeofno();

void cubeofno()
{
    int n,total;
    printf("enter a number");
    scanf("%d",&n);
    total = n*n*n;
    printf("cube of number is:%d",total);
}

int main()
{
    cubeofno();
    return 0;
}
