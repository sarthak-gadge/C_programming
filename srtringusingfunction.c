#include<stdio.h>
void displaystring(char[]);
void acceptstring(char[]);

void displaystring(char name[10])
{
    printf("the string is%s\n",name);
    // puts(name);
}

void acceptstring(char name[10])
{
    printf("enter a string");
    // gets(name);
    scanf("%s",name);
}

int main()
{
    char name[10];
    acceptstring(name);
    displaystring(name);
    return 0;
}