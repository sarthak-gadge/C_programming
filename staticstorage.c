#include<stdio.h>
void fun();

void fun()
{
    static int a=0;
    int b=0;
    a++;
    b++;
    printf("a=%d,b=%d",a,b);
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}