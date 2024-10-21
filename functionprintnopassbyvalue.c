#include<stdio.h>
void printnumber(int i);

void printnumber(int i)
{
    for(i=1;i<=10;i++)
    {
        printf("\nthe number is%d",i);
    }
}
int main()
{
    int i;
    printnumber(i);
    return 0;
}