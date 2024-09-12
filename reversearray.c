#include<stdio.h>
void printarr(int array[],int n);
void reverse(int array[],int n);
int main()
{
  int array[]={34,56,78,90,92};
  reverse(array,5);
  printarr(array,5);
  return 0;

}
void printarr(int array[],int n)
{
  for (int  i = 0; i < n; i++)
  {
    printf("%d element  of the array is :%d \n ",(i+1),array[i]);
  }
  
}
void reverse(int array[],int n)
{
  int first;
  int second;
 for (int  i = 0; i < (n/2) ; i++)
 {
  /*temp=array[i];
  array[i]=array[n-i-1];
  array[n-i-1]=array[i];*/
   first=array[i];
   second=array[n-i-1];
   array[i]=second;
   array[n-i-1]=first;
}
 
}