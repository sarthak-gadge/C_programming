#include<stdio.h>
void accept(char a[5][20]);

void display(char a[5][20])
{
    printf("you entered string:");
    for(int i=0;i<5;i++)
    {
        puts(a[i]);
    }
   
}

int main()
{
    char a[5][20];
    printf("entered the string:");
    for(int i=0;i<5;i++)
    {
        gets(a[i]);
    }
    display(a);
}