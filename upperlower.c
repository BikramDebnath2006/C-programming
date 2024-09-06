#include<stdio.h>
int main()
{
   char a;
    printf("please enter a character");
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    {
      printf("uppercase letter");
    }
    else if (a>='a'&&a<='z')
    {
      printf("lowercase letter");
    }
    else
    {
        printf("not an english alphabet");

    }
return 0;
    

}