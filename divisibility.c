#include<stdio.h>
int main(){
    int a, div;
    printf("please enter a number:");
    scanf("%d",& div);
    printf("please enter the number to be divided:");
    scanf("%d",&a);
    if (a%div==0)
    {
        printf("the number is divisible by %d",div);
    }else{
        printf("the number is not divisible by % d" ,div);
    }
    


}