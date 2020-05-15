#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    printf("Enter string : ");
    gets(a);
    int len = strlen(a),j;
    for(int i=0; i<len; i++)
    {
        if(a[i] == ' ')
        {
            for(j=i; j<len - 1; j++)
                a[j] = a[j+1];
            
            a[j] = '\0';
            len--;
        }
    }
    printf("After removing whitespaces string will be :\n");
    puts(a);
}
