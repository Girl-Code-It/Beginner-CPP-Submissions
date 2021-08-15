#include<stdio.h>

int main()
{
    char a[100];
    printf("Enter string : ");
    gets(a);
    int word_count = 1;

    for(int i=0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
            word_count++;
    }

    printf("Total no of words : %d",word_count);
    return 0;

}