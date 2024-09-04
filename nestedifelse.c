#include<stdio.h>
int main()
{
    int age;
    printf("please enter your age");
    scanf("%d",&age);
    if (age>14 && age<18)
    {
        printf("you are an teenager");

    }
    else if(age>18){
        printf("you are a adult");

    }
    else{
        printf("you are a baby");
    }
    return 0;
}