#include<stdio.h>
int main()
{
    int a;
    printf("print the number whose tables is to be printed: ");
    scanf("%d",& a);
    for (int i = 0; i < 11; i++)
    {
       printf("%d * %d= %d \n", a,i, (a*i)); 
    }
    return 0;
    
}