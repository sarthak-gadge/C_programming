#include<stdio.h>
void addition(int a,int b);


void addition(int a,int b)
{
    int c = a + b;
    printf("addition of a and b is:%d",c);
}


int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d,&a");
    printf("enter the value of b");
    scanf("%d,&b");
    addition(a,b);
    return 0;
}