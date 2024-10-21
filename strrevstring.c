#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("enter your string");
    scanf("%s",s);
    strrev(s);
    printf("\nyour reverse string is%s",s);
    return 0;
}