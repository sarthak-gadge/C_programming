#include<stdio.h>
int main()
{
    int i,j;
    int multi_dim[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&multi_dim [i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",multi_dim[i][j]);
        }
        printf("\n");
    }
    return 0;
}