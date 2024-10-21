#include<stdio.h>
float rainfallweek(int[],int);

float rainfallweek(int rainfall[],int size) 
{
    float avg,total=0,a[7];
    int i;
    for(i=0;i<7;i++)    
    { 
        total = total + rainfall[i];
    }
    avg=total/7;
    return avg;
}

int main()
{
    float result,rainfall[7];
    printf("enter the 7 days rainfall");
    for(int i=0;i<7;i++)
    {
    scanf("%f",&rainfall[i]);
    }    
    result = rainfallweek(rainfall,7);
    printf("average rainfall of the week is:%f",result);
    return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                        