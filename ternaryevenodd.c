#include<stdio.h>
int main()
{
    int no;
    printf("enter your no");
    scanf("%d",&no);
    char max;
    max=(no%2==0)?printf("even"):printf("odd");
    return 0;
}