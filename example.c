#include<stdio.h>

struct emp

 {

  char name[20];

  int age;

  float sal;

 };

int main()

{

   struct emp e1={"Seed"};

   printf("%d %f ", e1.age, e1.sal);

 return 0;

}