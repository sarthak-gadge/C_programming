
// #include<stdio.h>
// int main()
// {
//     int i,n,m=0,flag=0;
//     m=n/2;

//     for(n=2;n<=100;n++)
//     {
//     for(i=2;i<=m;i++)
//     {
//         if(n%i==0)
//         {
//             flag=1;
//             break;
        
//         }
//       if(flag==0)
//         printf("%d",n);
        
//     }
//     }
//     return 0;
    
// }






#include<stdio.h>
int main()
{
    int i,num,count,min,max;
    printf("enter min and max");
    scanf("%d%d",&min,&max);
    num=min;
    for(;num<=max;)
    {
        count = 0;
        for(i=2;i<=num/2;)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0)
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}

