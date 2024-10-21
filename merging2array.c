#include<stdio.h>
int main()
{
    int array1[5]={10,20,30,40,50};
    int array2[5]={60,70,80,90,100};


    int size1 = sizeof(array1)  / sizeof(array1[0]);
    int size2 = sizeof(array2)  / sizeof(array2[0]);

    int mergedarray[size1 + size2];

    for(int i=0;i<size1;i++)
    {
        mergedarray[i] = array1[i];
    }

    for(int i=0;i<size2;i++)
    {
        mergedarray [ size1 + i] = array2[i];
    }

    printf("merged array : ");

    for(int i=0;i<size1+size2;i++)
    {
        printf("%d\t",mergedarray[i]);
    }
    return 0;
}

















