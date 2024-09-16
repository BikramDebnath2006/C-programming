#include<stdio.h>
int largestarrayelement(int array[],int size);
int printarray(int array[],int size);
int main()
{  int size;
    printf("enter the size of the array:  ");
    scanf("%d",& size);
    int array[size];
    //size= sizeof(array)/sizeof(array[0]);
      printarray(array,6);
     int b= largestarrayelement(array,6);
     printf("the largest element in the array is %d ",b);
     return 0;

}
int printarray(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array:",(i+1));
        scanf("%d",&array[i]);
    }
    
}
int largestarrayelement(int array[],int size)
{
    int max=0;
    for (int  i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
    return max;
    
}
