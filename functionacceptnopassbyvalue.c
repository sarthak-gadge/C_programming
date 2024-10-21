#include<stdio.h>
void acceptno(int n);

void acceptno(int n)
{
    printf("the number is %d",n);
}


int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    acceptno(n);
    return 0;
}