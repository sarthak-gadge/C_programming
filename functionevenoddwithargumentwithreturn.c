#include<stdio.h>
int evenodd(int n);

int evenodd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result = evenodd(n);
    printf("%d",result);
    return 0;
}