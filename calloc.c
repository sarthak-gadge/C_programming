#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n,i;
    printf("enter the no of elements:");
    scanf("%d",&n);

    ptr = (int*) calloc (n,sizeof(int));

    if(ptr == NULL)
    {
        printf("memory succesfully not allocated\n");
        exit(0);
    }
    else
    {
        printf("memory succesfully allocated using calloc\n");
    }

    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
    return 0;


}