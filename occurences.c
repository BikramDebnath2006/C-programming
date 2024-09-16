#include<stdio.h>
int ocuurences(int array[],int n);
int main()
{
  int array[]={23,56,23,67,8,9,9,67,9};
  int size= sizeof(array)/sizeof(array[0]);
  int b=occurences(array,size,9);
  printf("the number of occurences of the number in the array  is :%d ", b);
  return 0;

}
int occurences(int array[],int size,int n)
{
    int count=0;
    for (int  i = 0; i < size; i++)
    {
        if (array[i]==n)
        {
            count++;
        }
        
    }
    return count;
    
}