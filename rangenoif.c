#include<stdio.h>
int main()
{
    int no;
    printf("enter your number");
    scanf("%d",&no);
    if(no>1&&no<=100)
    {
        printf("number is in range");
    }
    else
    {
        printf("number is not in range");
    }
    return 0;
    
}