#include<stdio.h>
int main()
{
    int i,num,multi;
    for(num=2;num<=7;num++)
    {
        for(i=1;i<=10;i++)
        {
            multi=num*i;
            printf("%d*%d=%d\n",num,i,multi);
        }
    }
    return 0;
}