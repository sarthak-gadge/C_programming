#include<stdio.h>
void circumferenceofcircle();

void circumferenceofcircle()
{
    int r;
    float pi=3.14,area;
    printf("enter a radius");
    scanf("%d",&r);
    area = 2*3.14*r;
    printf("tcircumference of circle is:%f",area);
}

int main()
{
    circumferenceofcircle();
    return 0;
}