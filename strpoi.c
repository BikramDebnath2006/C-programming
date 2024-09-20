#include<stdio.h>
struct student
{
int roll;
float cgpa;
};
int main()
{
  struct student s1={3076,9.1};
  struct student *ptr;
  ptr=&s1;
  printf("%u",ptr->roll);
  
  
  
}