#include<stdio.h>
void swap(int *a,int *b);

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping value in a=%d,b=%d\n",*a,*b);
}

int main()
{
    int a=10;
    int b=20;
    printf("before swapping value in \na=%d,b=%d",a,b);
    swap(&a,&b);
    return 0;

}