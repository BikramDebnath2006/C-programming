#include<stdio.h>
int main()
{
    int marks[]={23,39,33};
    printf("%d \n",marks[0]);
    printf("%d \n",marks[1]);
    printf("%d \n",marks[2]);
    
    int rollnumbers[5];
    rollnumbers[0]=23;
    rollnumbers[1]=32;
    rollnumbers[2]=89;
    rollnumbers[3]=11;
    rollnumbers[4]=31;
    for (int  i = 0; i <= 4; i++)
    {
       printf("the number  %d roll number are: %d \n", (i+1) ,rollnumbers[i]) ;
    }
    return 0;
    }