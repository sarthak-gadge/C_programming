#include<stdio.h>
int circum(int r);

int circum(int r)
{
    float pi=3.13,area;
    area =2*3.14*r;
    return area;
}

int main()
{
    int r,result;
    printf("enter a radius");
    scanf("%d",&r);
    result=circum(r);
    printf("circumference of circle is:%d",result);
    return 0;
}