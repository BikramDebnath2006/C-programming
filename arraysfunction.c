#include <stdio.h>
void printnumber(int marks[],int n);
int main()
{
    //int marks[6];
  int marks[]={34,35,67,89,90,23};
  printnumber(marks,6);
  return 0;

  //printnumber(int marks[] ,6);
}
void printnumber(int marks[],int n)
{
    for (int  i = 0; i < n; i++)
    {
      printf("%d number of the array is %d \n" ,(i+1),marks[i]);
      //scanf("%d",array[i]);
    
    }
    return 0;
    
}