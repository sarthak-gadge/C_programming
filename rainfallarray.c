#include<stdio.h>
int main()
{
    float a[7],avg,total=0;
    int i;
    printf("enter a rainfall in mm for 7 days:\n");
    for(i=0;i<7;i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0;i<7;i++)
    {
         total = total +a[i];
    }
    avg = total/7;

    printf("average rainfall in one week:%f",avg);
    //  printf("%f",total);
    return 0;


}






