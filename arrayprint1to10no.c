#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10},i;
      printf("enter element in array A:");
    
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }

    int b[5],j;
    b[0]=11; b[1]=12; b[2]=13; b[3]=14; b[4]=15; 
    printf("\nenter number in array B: ");
    for(j=0;j<5;j++)
    {
        printf("%d\t",b[j]);
    }

  
    return 0;
}