#include<stdio.h>
int addition(int a,int b);

int addition(int a,int b)
{
    int c=a+b;
    return c;
}

int main()
{
    int a,b,result;
    printf("enter a value of a and b");
    scanf("%d%d",&a,&b);
   result= addition(a,b);
    printf("the addition is%d",result);
    return 0;
}