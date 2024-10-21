#include<stdio.h>
#define SQUARE(n) (n*n)
#define CUBE(n)  (n*n*n)

int main()
{
    int a=6,x,y;
    x=SQUARE (a);
    y=CUBE(a);
    printf("square of no is:%d",x);
    printf("cube of no is:%d",y);
    return 0;
}