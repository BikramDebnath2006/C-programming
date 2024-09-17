#include<stdio.h>
void slicing(char array[]);
void takearrayelements(char array[]);
int main()
{
  char original[100];
  takearrayelements(original);
  slicing(original);
}
void takearrayelements(char array[])
{
    fgets(array,100,stdin);
    puts(array);
    
}
void slicing(char array[])
{
    for (int i = 3; i < 7; i++)
    {
        printf("%c",array[i]);
    }
    
}