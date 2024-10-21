#include<stdio.h>
int markgrade(int *rollno,int *marks);

int markgrade(int *rollno,int *marks)
{
    char grade;
 
    if(*marks>=50 && *marks<=60)
    {
        grade = 'D';
    }
    else if(*marks>=60 && *marks<=70)
    {
        grade = 'C';
    }
    else if(*marks>=70 && *marks<=80)
    {
        grade = 'B';
    }
    else if(*marks>=80 && *marks<=90)
    {
        grade = 'A';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}


int main()
{
    int rollno,marks,result;
    printf("enter roll no and marks");
    scanf("%d%d",&rollno,&marks);

    result = markgrade(&rollno,&marks);
    printf("\nresulting grade of roll no %c",result);
    return 0;

}