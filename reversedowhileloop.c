#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("enter a number");
    scanf("%d",&num);
    do
    {
        rem = num%10;
        rev = (rev*10)+ rem;
        num = num/10;
    }while(num>0);
    printf("the reverse number is: %d",rev);
    return 0;
}