// #include<stdio.h>
// void selectionsort(int arr[],int n);

// void selectionsort(int arr[],int n)
// {
//     int i,j,smallest,temp;
//     for(i=0;i<n-1;i++)
//     {
//         smallest = i;
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[smallest]>arr[j])
//             {
//                 smallest = j;
//             }
//         }
//         if(smallest != i)
//         {
//             temp = arr[i];
//             arr[i] = arr[smallest];
//             arr[smallest] = temp;
//         }
//     }
// }

// void printarray(int arr[],int size)
// {
//     int i;
//     for(i=0;i<size;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[5]={50,70,20,40,05};

//     printf("original array:\n");
//     printarray(arr,5);

//     selectionsort(arr,5);

//     printf("\nsorted array:\n");
//     printarray(arr,5);

//     return 0;
// }

























#include<stdio.h>
void selectionsort(int arr[],int n);
void printarray(int arr[],int size);

void selectionsort(int arr[],int n)
{
    int i,j,smallest,temp;
    for(i=0;i<n-1;i++)
    {
        smallest = i;
        for(j=i+1;j<n;j++)
        {
            
        if(arr[j]<arr[smallest])
        {
            smallest = j;
        }
        if (smallest!=i)
        {
            temp = arr[i];
            arr[i] = arr[smallest];
           arr[smallest] = temp;
        }
        }
        
        
    }
}

void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5]={3,5,1,4,2};

    printf("original array\n:");
    printarray(arr,5);

    selectionsort(arr,5);

    printf("\nsorted array\n:");
    printarray(arr,5);

    return 0;
}