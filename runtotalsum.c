#include<stdio.h>
static int total;

int runno(int n);

int runno(int n)
{
    total = total+n;
    return total;
}

int main()
{
    int n,result;
      printf("enter a number");
      scanf("%d",&n);
    while(n!=0)
    {
        result = runno(n);
        printf("total is %d",result);

        printf("\nenter a number to add or enter 0 to exit");
        scanf("%d",&n);
    }
    return 0;
}

