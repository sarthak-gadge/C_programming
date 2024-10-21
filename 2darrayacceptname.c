#include<stdio.h>
int main()
{
    char name[5][10];
    printf("enter the name list:\n");
    for(int i=0;i<5;i++)
    {
        gets(name[i]);
    }

    printf("you netered name list:");
    for(int i=0;i<5;i++)
    {
        puts(name[i]);
    }
    return 0;
}