#include<stdio.h>
int areaofcircle(int r);

int areaofcircle(int r)
{
    float pi=3.14,area;
    area = 3.14*r*r;
    return area;
}

int main()
{
    int r,result;
    printf("enter a radius");
    scanf("%d",&r);
    result=areaofcircle(r);
    printf("area of circle is:%d",result);
    return 0;
}
