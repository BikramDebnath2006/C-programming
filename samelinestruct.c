#include<stdio.h>
struct student 
{
   int roll;
   int cgpa;
};

int main()
{
 struct student s1={3076,9};
 printf("%d \n  %d",s1.roll,s1.cgpa);
 return 0;
 
}