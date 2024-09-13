#include<stdio.h>
int main()
{
    int a,b, temp ,sum;
    a=0;
    b=1;
    printf("0 1");
    for (int  i = 0; i < 9; i++)
    {
     sum=a+b;
      a=b;
      b=sum;
      
      printf(" %d " ,sum);

    }
    
}