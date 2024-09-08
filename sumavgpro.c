#include<stdio.h>
int sumpro(int *a,int *b);
int main()
{
 int a=4,b=6;
 sumpro(&a,&b);
 printf("the average of two numbers are %d",((a*b)/2));
 return 0;
}
int sumpro(int *a,int *b)
{
    int sum= *a+*b;
    int pro=(*a)*(*b);
    printf("the sum of two numbers is %d",sum);
    printf("the product of two numbers are %d",pro);
    return 0;
}