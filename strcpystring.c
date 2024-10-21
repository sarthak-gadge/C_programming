#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[30];
    strcpy(s1,"sarthak");
    strcpy(s2,s1);

    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}