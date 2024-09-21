#include<stdio.h>

struct vectors
{
   int a;
   int b;
   int c;
};
//void sumofvectors(struct vectors);
void sumofvectors(struct vectors a,struct vectors b);
void takestructureelements(struct vectors *h);

int main()
{
  struct vectors s1;
  struct vectors s2; 
  takestructureelements(&s1);
  takestructureelements(&s2);
  sumofvectors(s1,s2);
  
}
void takestructureelements(struct vectors *h)
{
  printf("enter the 1st number : ");
  scanf("%d",&h->a);
  printf("enter the 2nd number : ");
  scanf("%d",&h->b);
  printf("enter the 3rd number : ");
  scanf("%d",&h->c);
  
  
}
void sumofvectors(struct vectors c,struct vectors d)
{
    int sum1,sum2,sum3;
    sum1=c.a +d.a;
    sum2=c.b+d.b;
    sum3=c.c+d.c;
    printf("the sum of the vectors is %d i+ %d j+ %d k",sum1,sum2,sum3);

}
