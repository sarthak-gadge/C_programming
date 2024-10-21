#include<stdio.h>
void displaymarks(int e[],int n);

void displaymarks(int e[],int n)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",e[i]);
    }
}

int main()
{
    int marks[5]={65,67,69,54,24};
    displaymarks(marks,5);
    return 0;
}