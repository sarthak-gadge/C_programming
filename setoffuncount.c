#include<stdio.h>
int add(int a,int b);
int sub(int a, int b);

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int main()
{
    int a,b,count;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    count = add(a,b);
    count1 = sub(a,b);
    printf("add is %d",)

}