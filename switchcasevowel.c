#include<stdio.h>
int main()
{
    char ch;
    printf("enter your character ");
    scanf(" %c",&ch);
    switch (ch)
    {
        case 'a': case 'A': case'e': case'E':case'I':case'i':case'o':case'O':case'U':case'u':
        printf("it is vowel");
        break;

        default:
        printf("it is not vowel");
    }
    return 0;
}