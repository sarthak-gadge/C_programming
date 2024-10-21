#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the number in array A: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elemnets in array : ");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;

}