#include<stdio.h>
void displaymarks(int e);

void displaymarks(int e)
{
    printf("%d\t",e);
}

int main()
{
    int i, marks[5]={65,67,69,72,74};
    for(i=0;i<5;i++)
    {
        displaymarks(marks[i]);
    }
    return 0;
}