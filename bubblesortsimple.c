#include<stdio.h>
int main()
{
    int a[10],i,j,n,t;
    printf("enter the elements size ");
    scanf("%d",&n);

    printf("enter the elements\n :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("before sorting the bullble sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nafter sorting the bubble sort\n : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}