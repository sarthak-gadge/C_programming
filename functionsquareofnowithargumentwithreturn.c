#include<stdio.h>
int squareofno(int n);

int squareofno(int n)
{
    int total;
    total=n*n;
    return total;
}

int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=squareofno(n);
    printf("square is :%d",result);
    return 0;

}