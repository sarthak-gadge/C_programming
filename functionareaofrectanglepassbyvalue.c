#include<stdio.h>
void areaofrectangle(int l,int b);

void areaofrectangle(int l,int b)
{
    int area;
    area=l*b;
    printf("area of rectangle is:%d",area);
}

int main()
{
    int l,b;
    printf("enter a value of l abd b");
    scanf("%d%d",&l,&b);
    areaofrectangle(l,b);
    return 0;
}