#include<stdio.h>
int main()
{
    int num,num1,total=0;

    for(;num!=0;)
    {
    printf("enter a number for addition otherwisw put 0\n");
    scanf("%d",&num);
    for(num1=num;num1>0||num1<0;)
    {
        total+=num;
        printf("%d sum is:",total);
        break;
    }
    
    }
    return 0;
}