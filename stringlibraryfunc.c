#include<stdio.h>
#include<string.h>
int main()
{
  char firstname[]="bidisha ";
  char secondname[]="debnath";
  strcat(firstname,secondname);
  printf("the full name of the person is %s \n", firstname);
  strcpy(firstname,secondname);
  printf("the first string is %s \n",firstname);
  printf("the second name is %s \n",secondname);
}
