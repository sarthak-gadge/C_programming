#include<stdio.h>
int main()
{
    int num,i=1,f=1;
    for(num=2;num<=7;num++)
    {
       while(i<=num)
        {
            f=f*i;
            i++;
    
        }
        printf("factorial %d is %d\n",num,f);
    }
    return 0;
}