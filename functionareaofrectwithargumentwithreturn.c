#include<stdio.h>
int areaofrect(int l,int b);

int areaofrect(int l,int b)
{
    int area;
    area = l*b;
    return area;
}

int main()
{
    int l,b,result;
    printf("enter value of l and b");
    scanf("%d%d",&l,&b);
    result = areaofrect(l,b);
    printf("area of rectangle is :%d",result);
    return 0;
}