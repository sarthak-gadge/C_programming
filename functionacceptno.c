#include<stdio.h>
void acceptno();

void acceptno()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the number is%d",n);
}

int main()
{
    acceptno();
    return 0;
}
