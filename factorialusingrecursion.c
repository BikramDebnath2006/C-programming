#include<stdio.h>
int factorial(int n);
int main()
{
 
    int f;
    f=factorial(4);
    printf("the factorial is %d",f);
    return 0;


}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factorialnm1=factorial(n-1);
   int factorialn=factorialnm1*n;
    return factorialn;
}