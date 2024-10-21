#include<stdio.h>
void areaofrectangle();

void areaofrectangle()
{
    int l,b,area;
    printf("enter a value of l and b");
    scanf("%d%d",&l,&b);
    area = l*b;
    printf("area pof rectangle is:%d",area);
}

int main()
{
    areaofrectangle();
    return 0;
}
