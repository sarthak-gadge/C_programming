#include<stdio.h>
int main()
{
    int i,a[5];
    printf("enter the number in array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        a[i] = a[i] * 3;
    }
   
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}