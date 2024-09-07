#include<stdio.h>
int sum();
int factorial(n);
int sumn;
int main()
{
    int n;
   int b=sum(5);
   printf("the sum of numbers is: %d" , b) ;
   return 0;
}
int sum(n)
{
    if (n==1)
    {
        return 1;
    }
    
    int sumnm1=sum(n-1);
    int sumn=sum(n-1)+n;
    return sumn;


}