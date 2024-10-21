#include<stdio.h>
void factorial(int n);

void factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
         f = f*i;
    }  
      printf("the factorial is %d",f);
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    factorial(n);
    return 0;

}
