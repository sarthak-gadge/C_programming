#include<stdio.h>
int main()
{
    int i;
    char arr[7];
    printf("enter a string");
    for(i=0;i<7;i++)
    {
    scanf(" %c",&arr[i]);
    }

    for(i=7;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;

}