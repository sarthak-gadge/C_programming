#include<stdio.h>
int main()
{
    int i;
    char a[10];
    printf("enter a string : ");
    for(i=0;i<10;i++)
    {
        scanf(" %c",&a[i]);
    }

    a[i]='\0';

    for(i=0;a[i]!='\0';i++)
    {
        printf(" %c",a[i]);
    }
    return 0;
}