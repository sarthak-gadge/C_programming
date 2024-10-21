#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter elemnet in array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n the elements in array: ");
    for(i=0;i<10;i++)
    {
            printf("%d\t",a[i]);
    }
   
    return 0;

}