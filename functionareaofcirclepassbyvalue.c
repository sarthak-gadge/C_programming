#include<stdio.h>
void areaofcircle(int r);

void areaofcircle(int r)
{
    float area,pi=3.14;
    area= 3.14*r*r;
    printf("area of circle is %f",area);
}

int main()
{
    int r;
    printf("enter a radius");
    scanf("%d",&r);
    areaofcircle(r);
    return 0;
}
