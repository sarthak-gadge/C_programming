#include<stdio.h>
int circum();

int circum()
{
    int r;
    float pi=3.14,area;
    printf("enter a radius");
    scanf("%d",&r);
    area = 2*3.14*r;
    return area;
}

int main()
{
    int result=circum();
    printf("circumference of circle is:%d",result);
    return 0;
}
