#include<stdio.h>
#define SQUARE(n)  (n*n)

int main()
{
    int x=3;
    printf("%d",SQUARE(x+2));
    int y=SQUARE(x);
    printf("\nsquare is%d",y);
    return 0;
}

