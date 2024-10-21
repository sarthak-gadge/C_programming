#include<stdio.h>
int main(int argc, char argv[])
{
    
    if(argc==2)
    {
        printf("the argument is suppiled %s",argv[1]);
    }

    else if(argc>2)
    {
        printf("two many argument supplied\n");
    }

    else
    {
        printf("one argument expected");
    }
    return 0;
}