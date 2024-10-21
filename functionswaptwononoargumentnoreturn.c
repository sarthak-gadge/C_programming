#include<stdio.h>
int swapno();

int swapno()
{
    int a,b,temp;
    printf("enter a value of a and b ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
     printf("after swapping value in function a=%d, b=%d",a,b);
   
}

int  main()
{
    swapno();
    return 0;
}