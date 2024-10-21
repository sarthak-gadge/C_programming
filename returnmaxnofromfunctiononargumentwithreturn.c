#include<stdio.h>
int maxno();

int maxno()
{
    int a,b;
    printf("enter a value of a and b");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int  max;
    max = maxno();
    printf("%d",max);
    return 0;
}