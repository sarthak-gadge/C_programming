#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value");
    scanf(" %c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("it is digit");
    }
    else
    {
        printf("it is alphabate");
    }
    return 0;
}