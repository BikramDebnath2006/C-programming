#include<stdio.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
   struct student cseai[100];
   cseai[1].cgpa=9.8;
   cseai[1].roll=9123;
   strcpy(cseai[1].name,"bikram");
   printf("%f\n",cseai[1].cgpa);
   printf("%d\n",cseai[1].roll);
   printf("%s\n",cseai[1].name);
   return 0;
   
}