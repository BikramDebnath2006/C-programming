#include<stdio.h>
void swapping(int *x ,int *y);
int main()
{
    int a=5, b=4;

 swapping(&a,&b);
 return 0;
}

void swapping(int*x, int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
    
    printf("the first number becomes:%d",*x);
    printf("the second number swaping becomes: %d",*y);

return 0;
}