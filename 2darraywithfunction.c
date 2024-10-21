#include<stdio.h>
void displayresult(int[3][4],int);

void displayresult(int a[3][4],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,a[3][4],n=3;
    printf("enter the numbers\n:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    displayresult(a,n);
}