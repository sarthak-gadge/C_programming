#include<stdio.h>
void sq_cb(int n,int *square,int *cube);

void sq_cb(int n,int *square,int *cube)
{
    *square  = n*n;
    *cube = n*n*n;
}

int main()
{
    int n,square,cube;
    printf("enter a number");
    scanf("%d",&n);

    sq_cb(n,&square,&cube);

    printf("\nsquare of number = %d\n",square);
    printf("cube of number =%d\n",cube);
    return 0;
}