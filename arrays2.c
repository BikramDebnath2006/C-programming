#include<stdio.h>
int main()
{
 int marks[5];
 //int *ptr= &(marks[0]); this line is completely optional.nothing will affect your program.
 for (int i = 0; i < 5; i++)
 {
    printf("%d index: ",i);
    scanf("%d", &marks[i]);
 }
 for (int i = 0; i < 5; i++)
 {
    printf(" the value at %d index is %d \n", i ,marks[i]);
 }
 return 0;
 
 }