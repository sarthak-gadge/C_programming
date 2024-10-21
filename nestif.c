#include<stdio.h>
int main()
{
    int age;
    char gender;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your gender\n");
    scanf(" %c",&gender);

    if(age>=60)
    {
        if(gender=='f')
        {
            printf("9.75% intrest rate");
        }
        else
        {
            printf("9.50% intrest rate");
        }
    }
    else
    {
        printf("8.00% intrest");
    }
    return 0;

}