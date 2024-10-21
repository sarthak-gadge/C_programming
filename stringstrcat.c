#include<stdio.h>
#include<string.h>
int main()
{
    char string1[10]="sarthak";
    char string2[10]="gadge";
    strcat(string1,string2);

    printf("output after concatination is%s\t",string1);
    return 0;
}