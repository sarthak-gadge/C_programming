#include<stdio.h>
void displaymarks(int *e,int n);

void displaymarks(int *e,int n)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(e+i));
    }
}

int main()
{
    int marks[5]={56,57,58,59,53};
    displaymarks(marks,5);
    return 0;
}
