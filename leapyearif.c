#include<stdio.h>
int main()
{
    int year;
    printf("enter your year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("then it is leap year");
    }
    else
    {
        printf("it is not leap year");
    }
    return 0;
}