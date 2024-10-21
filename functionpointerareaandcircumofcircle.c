#include<stdio.h>
void area_circumofcircle(int r,float *area,float *circumference);

void area_circumofcircle(int r,float *area,float *circumference)
{
    float pi=3.14;
    *area = 3.14*r*r;
    *circumference = 2*3.14*r;
}

int main()
{
    int r;
    float area,circumference;
    printf("enter a radius");
    scanf("%d",&r);

    area_circumofcircle(r,&area,&circumference);

    printf("area of circle =%f\n",area);
    printf("circumference of circle =%f\n",circumference);
    return 0;
}