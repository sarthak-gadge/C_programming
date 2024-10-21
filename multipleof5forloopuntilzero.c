#include<stdio.h>
int main()
{
    int num;
    for(;num!=0;)
    {
        printf("enter a number or put zero to exit");
        scanf("%d",&num);

        if(num%5==0)
        {
            printf("the number is %d",num);
            continue;
        }
    }
      return 0;

}




// #include<stdio.h>
// int main()
// {
    // int num;

    // for(;num!=0;)
    // {
        // printf("Enter a number or put zero to exit:\n");
        // scanf("%d",&num);
        // 
        // if(num % 5 == 0 )
        // {
            // printf("The number is %d.\n",num);
            // continue;
        // }
    // }
    // return 0;
// }





