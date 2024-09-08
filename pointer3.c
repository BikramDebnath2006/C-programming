#include<stdio.h>
int main()
{
    int i=2;
    int *ptr=&i;
    int **pptr=&(ptr);
    int age=**(pptr);
    printf("the value is : %d",ptr);
    printf("the value is : %d",pptr);
    printf("the value of i id:%d",age);
    return 0;

}