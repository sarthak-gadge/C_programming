#include<stdio.h>
void add();
void add1();
extern int x=10;
extern int y=20;

void add()
{
    int y=100;
    printf("y=%d",y);
    printf("x=%d,y=%d",x,y);
}

void add1()
{
    printf("x=%d,y=%d",x,y);
}

int main()
{
    int a=20;
    printf("\n a=%d",a);
    printf("x=%d",x);
    add();
    add1();
    return 0;
}