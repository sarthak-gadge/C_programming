#include<stdio.h>
int main()
{
    int ch;
    printf("1-marathi\n,2-hindi\n,3-english");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("you selected marathi");
    break;
    
    case 2:
    printf("you selected hindi");
    break;

    case 3:
    printf("you selected english");
    break;
    default:
        printf("invalid data");
    
    return 0;
}
}