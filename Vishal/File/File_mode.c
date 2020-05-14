#include<stdio.h>

void main()
{
    {
        //Reading a file

        FILE *ptr = NULL;
        char string[50];
        ptr = fopen("text.c","r");
        fscanf(ptr,"%s",string);
        printf("The comtent is %s",string);

    }
    {
        //Writing a file

        FILE *ptr = NULL;
        char string1[40] = "I am a coder";
        ptr = fopen("text.c","w");
        fprintf(ptr,"%s",string1);

    }
     {
        //Appending a file

        FILE *ptr = NULL;
        char string1[40] = "I am a coder";
        ptr = fopen("text.c","a");
        fprintf(ptr,"%s",string1);

    }
}