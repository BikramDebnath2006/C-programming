#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fopen("bikram.txt","r");
    // bikram is a nice person.
    
    fscanf(fptr,"%c",&ch);
    printf("character=%c",ch);
    fclose(fptr);
    //write and append mode
    fopen("bidisha.txt","w");
    fprintf(fptr,"%c",'m');
    fclose("bidisha.txt");
    //short functions
    fgetc(fptr);//function to get a character 
    fputc('a',fptr);//function to push a character into the file
    return 0;

}