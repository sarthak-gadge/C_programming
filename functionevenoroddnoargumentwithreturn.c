#include<stdio.h>
int evenodd();

int evenodd()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
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
    int result;
    result = evenodd();
    printf("%d",result);
    return 0;
}