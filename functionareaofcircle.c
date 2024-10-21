#include<stdio.h>
void areaofcircle();

void areaofcircle()
{
    int r;
    float pi=3.14,area;
    printf("enter a radius");
    scanf("%d",&r);
    area = 3.14*r*r;
    printf("area of circle is:%f",area);
}
int main()
{
    areaofcircle();
    return 0;
}