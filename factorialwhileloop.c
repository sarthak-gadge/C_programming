#include<stdio.h>
int main()
{
    int f=1,n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        // printf("\nthe factorial of %d is %d",n,f);
         i++;
    }
      printf("\nthe factorial of %d is %d",n,f);
    
   
    return 0;
}