#include<stdio.h>
#include<string.h>
int main()
{
    char first[]="apple";
    char second[]="banana";
    int b= strcmp(first,second);
    if (b==0)
    {
        printf("both the strings are of same length");

    }
    else if (b>0)
    {
        printf("the first string is greater than the second one");
    }
    else{
        printf("the second string is greater than the first one");
    }
    return 0;
    
}