#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf(" %c",&ch);
    if((ch>='a'&& ch>='z') || (ch>='A'&& ch>='Z'))
    {
        printf("it is alphabate");
    }
    else
    {
        printf("it is digit");
    }
    return 0;
}