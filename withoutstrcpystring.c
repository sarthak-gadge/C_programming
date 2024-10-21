#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    int i;
    printf("enter a string");
    scanf("%s",s1);

    for(i=0;i!=20;i++)
    {
        s2[i]=s1[i];
    }
    s2[20]='\0';
    printf("string s2 is%s",s2);
    return 0;
}