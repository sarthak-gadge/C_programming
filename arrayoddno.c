#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the array elements A: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nenter the elemnets are ");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}

