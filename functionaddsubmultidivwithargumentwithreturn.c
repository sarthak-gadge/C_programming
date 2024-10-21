#include<stdio.h>
int add(int a,int b);
void sub(int a,int b);
void multi(int a,int b);
void div(int a,int b);

void div(int a,int b)
{
    int c= a/b;
    printf("%d\n",c);
}

void multi(int a,int b)
{
    int c=a*b;
    printf("%d\n",c);
}


void sub(int a,int b)
{
    int c=a-b;
    printf("%d\n",c);


}


int add(int a,int b)
{
    int c=a+b;
    div(a,b);
    multi(a,b);
    sub(a,b);
    return c;
}

int main()
{
    int a,b,result;
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    result = add(a,b);
    printf("%d",result);
    return 0;
}