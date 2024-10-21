#include<stdio.h>
int cubeofno();

int cubeofno()
{
    int n,total;
    printf("enter a number");
    scanf("%d",&n);
    total=n*n*n;
    return total;
}

int main()
{
    int result;
    result=cubeofno();
    printf("cube is :%d",result);
    return 0;
}