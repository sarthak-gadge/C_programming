#include<stdio.h>
void swap(int *a,int *b);

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping value in function a=%d,b=%d",*a,*b);
}

int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    return 0;
}
