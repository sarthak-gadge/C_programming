#include<stdio.h>
int add();

int add()
{
    int a,b,c;
    printf("enter a value of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

int main()
{
    int result=add();
    printf("the addition is%d",result);
    return 0;
}
