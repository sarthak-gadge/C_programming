#include<stdio.h>
int areaofcircle();

int areaofcircle()
{
    int r;
    float pi=3.14,area;
    printf("enter a radius");
    scanf("%d",&r);
    area=3.14*r*r;
    return area;
}

int main()
{
    int result=areaofcircle();
    printf("area of circle is%d",result);
    return 0;
}
