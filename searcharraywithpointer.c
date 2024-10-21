#include<stdio.h>
int search(int *,int ,int);

int search(int *array,int size,int element)
{
   
    for(int i=0;i<size;i++)
    {
        if(array[i] == element)
        {
          return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[5]={1,2,3,4,5},ele;

    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    printf("enter the element: ");
    scanf("%d",&ele);

    int result = search(arr,5,ele);

    
    if (result == -1)
    {
        printf("element not found");

    }
    else
    {
        printf("Element is found at %d position.",result);
    }
        
   
    return 0;
}