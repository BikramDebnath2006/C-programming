#include<stdio.h>
int main()
{
    char fullname[200];
    //scanf("%s",&fullname);
    /*printf("the full name of the canditate is ");
    scanf("%s",&fullname);
    printf("THE FULLNAME OF THE PERSON IS %s",fullname);*/
    /*one thing that must be noted is if you provide a space between your firstname and lastname then the scanf() function will print 
    only the firstname because fullname which is a drawback of the function and here comes the role of gets(),fgets(),and puts()*/
    char sentence[100];
    fgets(sentence,100,stdin);
    puts(sentence);
    
    return 0;
}