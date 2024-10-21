#include<stdio.h>
int swapno(int a,int b);

int swapno(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
        printf("swapping of values a=%d, b=%d\n",a,b);
}

int main()
{
    int a,b,result;
    printf("enter a value of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping of values a=%d, b=%d\n",a,b);
    result=swapno(a,b);
    return 0;
}
