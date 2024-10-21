#include<stdio.h>
void sumeven_odd(int *evensum,int *oddsum);

void sumeven_odd(int *evensum,int *oddsum)
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
         int evensum = 0, oddsum =0;

        sumeven_odd(&evensum,&oddsum);

        printf("sum of even numbers %d\n",evensum);
        printf("sum of odd numbers %d\n",oddsum);
        return 0;
    }
    


