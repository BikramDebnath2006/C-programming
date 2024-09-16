#include<stdio.h>
void printstrings(char array[]);
int main()
{
  char firstname[]="BIKRAM";
  char secondname[]="DEBNATH";
  printstrings(firstname);
  printf("\n");
  printstrings(secondname);
  return 0;
}
void printstrings(char array[])
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        printf("%c ",array[i]);
    }
    
}