#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,*ptr1;
    int i,n;
    
    n=5;

    ptr = (int*) malloc (n* sizeof(int));

    ptr1 = (int*) calloc (n, sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("MEMORY NOT ALLOCATRED");
        exit(0);
    }
    else
    {
        printf("memory successfully allocated in malloc");
        free(ptr);

        printf("memory successfully allocated in calloc");
        free(ptr1);
    }
    return 0;
}