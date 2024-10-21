#include<stdio.h>
void rem_quot(int n,int d,float *rem,float *quot);

void rem_quot(int n,int d,float *rem,float *quot)
{
    *rem=n%d;
    *quot=n/d;
}

int main()
{
    int n,d;
    float rem,quot;
    printf("enter a value of numerator and denominator");
    scanf("%d%d",&n,&d);

    if(d!=0)
    {
        rem_quot(n,d,&rem,&quot);
        printf("remainder is %f\n",rem);
        printf("quotient is %f\n",quot);
    }
    else
    {
        printf("division by zero is not allowed");
        printf("enter value of numerator and denominator");
        scanf("%d%d",&n,&d);
        
        rem_quot(n,d,&rem,&quot);

        printf("remainder is%f",rem);
        printf("quotient is %f",quot);

        return 0;
    }
}