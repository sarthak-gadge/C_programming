#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0;
    double average;

    printf("enter the number of elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the numbers %d\n",i+1);
        scanf("%d",&marks);

        sum += marks[i]

        
    }

    average = (double)sum/n;

    printf("average = %lf\n",average);
    return 0;

}