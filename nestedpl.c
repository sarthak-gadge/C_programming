#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter your cp and sp value");
    scanf("%d%d",&cp,&sp);

    if(cp>0&&sp>0)
    {
        if(cp>sp)
        {
            printf("loss");
        }
        else
        {
            printf("profit");
        }
    }
    else
    {
        printf("invalid input");
    }
}