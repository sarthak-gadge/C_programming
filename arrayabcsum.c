#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;

    printf("enter the elements in first array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the elements in second array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("resulting array : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}