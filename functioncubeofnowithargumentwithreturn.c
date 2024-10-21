#include<stdio.h>
int cubeofno(int n);


int cubeofno(int n)
{
    int total;
    total=n*n*n;
    return total;
}

int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=cubeofno(n);
    printf("cube is :%d",result);
    return 0;
}