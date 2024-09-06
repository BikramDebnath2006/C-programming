#include<stdio.h>
#include<math.h>
void hello();
int world();
int sum();
int table();
int main()
{
    hello();
    world();
    world();
    table(4);
    int b =sum(3,5);
    printf("%d",b);
    int p=pow(3,2);//in built library function
    //need not to be defined when used
    printf("square of the number is %d",p);
    return 0;
}
void hello()
{
    printf("hello world\n");
    printf("the skies are blue like your eyes \n");

}
int world()
{
printf("world");
printf("i am here");
}
int table(int a)
{
    for (int  i = 0; i<11; i++)
    {
        printf("%d * %d =%d \n",a,i,(a*i));
    }
    
}
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}