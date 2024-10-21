#include<stdio.h>
void sumoddeven(int *sum,int *oddsum);

void sumoddeven(int *evensum,int *oddsum)
{
    int n;
    for(n=1;n<=10;n++)
    {
        if(n%2==0)
        {
            *evensum+=n;
        }
        else
        {
            *oddsum+=n;
        }
    }
}

int main()
{
    int evensum,oddsum,n,s;
    printf("enter a number");
    scanf("%d",&s);
    printf("enter a number");
    scanf("%d",&n);
    evensum == 0, oddsum == 0;
    sumoddeven(&evensum,&oddsum);
    printf("sum of even no is :%d\n",evensum);
    printf("sum of odd no is :%d\n",oddsum);
    return 0;
}