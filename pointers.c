#include<stdio.h>
int main()
{
    int age=33;
    int *ptr=&age;
    int _age= *ptr;
    printf("the value is : %d\n",_age);
    printf("the value is :%d",*ptr);
    printf("the adress id : %u\n",&age);
    printf("the adress is :%u \n",ptr);
    printf("%d",*(&age));
    printf("the value of address of pointer variable is : %u\n" ,&ptr);
    return 0;
}