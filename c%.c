//the concept of salting a password
#include<stdio.h>
#include<string.h>
void takeelements(char array[]);
void salting(char array[],char saltpassword[]);
int main()
{
  char password[100];
  takeelements(password);
  char saltpassword[] ="meta";
  strcat(password,saltpassword);
  printf("your new password is %s",password);

  return 0;
}
void takeelements(char array[])
{
  printf("enter the password:");
  //fgets(array,100,stdin);
  //puts(array);
  scanf("%s",array);
}
void salting(char array[],char saltpassword[])
{
    strcat(array,saltpassword);
    
}