#include<stdio.h>
void oddnumbersinarrays(int arrays[],int n);
int main()
{
  int arrays[]={23,67,56,112,54};
  oddnumbersinarrays(arrays,5);
  return 0;
}
void oddnumbersinarrays(int arrays[],int n)
{
    int sum=0;
    int num=0;
  
    for (int  i = 0; i < n; i++)
    {
       printf("%d number in the array:%d\n",i,arrays[i]);
    
       if (arrays[i]%2 != 0)
       {

        num=num+1;
        sum=sum+arrays[i];
        //int avg=sum/num;
         // printf("the average of odd numbers of the array is %d",avg);
        }

        }
        //printf("the average of odd numbers of the array is %d",avg);
        if (num>0)
        {
            float avg= (float) sum/num;
            printf("the average of the odd numbers is %2.f \n",avg);
        }
        else {
         printf("there is no odd numbers ");
        }
        
        
       
}