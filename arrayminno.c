#include<stdio.h>
int main()
{
    int i,min,a[5];
    printf("enter the values in array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=0;i<5;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }        
    }
    printf("minimum number in array :%d",a[i]);
    return 0;

}