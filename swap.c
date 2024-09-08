//program will be done in two ways by call by value and call by referance
#include<stdio.h>
void swap(int a, int b);
int main()
{
  
   swap(4,6);
}
void swap(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    printf("the value of first number becomes %d \n",a);
    printf("the value of the second number after swapping becomes %d \n",b);
    return 0;
}