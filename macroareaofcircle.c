#include<stdio.h>
#define PI 3.14
#define AREA(n) (n*n)

int main()
{
    float r=3.5,x;
    x= AREA (r);
    printf("area of circle is:%f",x);
    return 0;

}