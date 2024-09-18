#include<stdio.h>
#include<string.h>
struct student
{
   int rollnumber;
   float cgpa;
   char *name;

};

int main()
{
  struct student s1;
  s1.cgpa=9.2;
  s1.rollnumber=3076;
  strcmp(s1.name,"Bikram");
  printf("the rollnumber and cgpa of the studnet is %D and %d ",s1.rollnumber,s1.cgpa);
  printf("the name of the student is %s",s1.name);
  return 0;
}