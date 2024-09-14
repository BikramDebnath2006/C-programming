#include<stdio.h>
void printtables(int array[][10],int n,int m);
int main()
{
  int array[2][10];
  printtables(array,2,3);
  return 0;


}
void printtables(int array[][10],int n,int m)
{
   for (int  i = 0; i < 9; i++)
   {
       array[0][i]=(i+1)*n;
   }
   for (int i = 0; i < 9; i++)
   {
      array[1][i]=(i+1)*m;

   }
   printf("the table of %d",n);
   for (int  i = 0; i < 9; i++)
   {
      printf("%d \n",array[0][i]);
   }
   printf("the table of %d",m);
   for (int  i = 0; i < 9; i++)
   {
      printf("%d \n ",array[1][i]);
   }
   
   
}