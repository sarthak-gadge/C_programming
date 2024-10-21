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
    int n,i,result;
    for(i=0;i<=4;i++)
    {
        printf("enter a number");
        scanf("%d",&n);

        result = runno(n);
        printf("%d",result);
    }
    return 0;

}