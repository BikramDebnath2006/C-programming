#include<stdio.h>
int fibbonaci(int n);
int main()
{
    int fib=fibbonaci(6);
  printf("the fibbonaci function will return:%d" ,fib);
  return 0;
}
int fibbonaci(int n){
    if(n==0||n==1){
        if (n==0)
        {
          return 0;
        }
        if (n==1)
        {
            return 1;
        }
        
        
    }
    int nm1=fibbonaci(n-1);
    int nm2=fibbonaci(n-2);
    int fibn= nm1+nm2;
    return fibn;

}