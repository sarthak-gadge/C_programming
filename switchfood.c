#include<stdio.h>
int main()
{
    int no;
    printf("1-maharashtafood\n,2-punjabifood\n,3-seafood,4-arebianfood");
    printf("enter your no");
    scanf("%d",&no);
    switch (no)
    {
        case 1:
        printf("it is maharashtrian food");
        break;

        case 2:
        printf("it is punjabi food");
        break;

        case 3:
        printf("it is sea food");
        break;

        case 4:
        printf("it is arebian food");
        break;

        default:
        printf("unavailable");
        break;
    }
    return 0;
}