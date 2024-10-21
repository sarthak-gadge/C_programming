#include<stdio.h>
int maxno(int a,int b);

int maxno(int a,int b)
{
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
    int a,b,max;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    max = maxno(a,b);
    printf("%d",max);
    return 0;


}