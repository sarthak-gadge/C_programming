#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="sarthak";
    char s2[20]="sarthak";

    if(strcmp(s1,s2)==0)
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
    return 0;
}