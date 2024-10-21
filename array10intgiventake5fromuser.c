#include<stdio.h>
int main()
{
    int i,a[10] = {10,20,30,40,50};

    for(i=5;i<10;i++)
    {
        printf("enter elements in %d th position\n",i+1);
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}