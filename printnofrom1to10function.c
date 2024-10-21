#include<stdio.h>
void printnumber();

void printnumber()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\nthe number is %d",i);
    }
}

int main()
{
    printnumber();
    return 0;
}