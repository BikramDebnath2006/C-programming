#include<stdio.h>
#include<string.h>
int voweloccurence(char array[],char vowels[]);
void printarray(char array[]);
int main()
{
  char array[100];
  char vowels[6]="aeiou";
  printf("enter the contents of the array");
  printarray(array);
  int b=voweloccurence(array,vowels);
  printf("the number of occurence of vowels in the array is %d",b);
}
void printarray(char array[])
{
   fgets(array,100,stdin);
   puts(array);
    
}
int voweloccurence(char array[],char vowels[])
{
    int count=0;
  for (int i = 0; i <strlen(array); i++)
  {
    for (int j = 0; j < strlen(vowels); j++)
  {
    if (array[i]==vowels[j])
    {
        count++;
        
    }
    else{
        continue;
    }
    
  }
  }
  return count;
  
}