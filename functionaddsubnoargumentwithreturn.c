#include<stdio.h>
int add();
void sub();
void multi();
void div();

void div()
{
    int a=12,b=6,c;
    c=a/b;
    printf("%d\n",c);
}

void multi()
{
    int a=30,b=10,c;
    c=a*b;
    printf("%d\n",c);
}

void sub()
{
    int a=30,b=20,c;
    c=a-b;
    printf("%d\n",c);
}

int add()
{
    int a=20,b=40,c;
    c=a+b;
    div();
    multi();
    sub();

    return c;
}

int main()
{
    int result = add();
    printf("%d\n",result);
}
