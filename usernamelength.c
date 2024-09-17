#include<stdio.h>
void printlength(char array[]);
int main()
{
   printf("enter your name :");
   char username[50];
   printlength(username);

   return 0;
}
void printlength(char array[])
{
    fgets(array,50,stdin);
    puts(array);
    
    
}