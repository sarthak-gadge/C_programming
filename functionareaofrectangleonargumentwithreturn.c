#include<stdio.h>
int  areaofrect();

int areaofrect()
{
    int l,b,area;
    printf("enter value of l and b");
    scanf("%d%d",&l,&b);
    area =l*b;
    return area;
}

int main()
{
    int result;
    result = areaofrect();
    printf("area of rectangle is :%d",result);
    return 0;
}