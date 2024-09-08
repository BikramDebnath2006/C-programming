#include<stdio.h>
void swapping(int *x,int *y);
int main()
{int a=4,b=5;

 swapping(&a,&b);
}
void swapping(int *x,int *y)
{
    int b=*x;
    *x=*y;
    *y=b;
    printf("the first number becomes:%d",*x);
    printf("the second number swaping becomes: %d",*y);

    

}