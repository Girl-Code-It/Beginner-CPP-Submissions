#include<stdio.h>

int main()
{
    char a[20],b[20];
    printf("Enter string : ");
    gets(a);
    printf("Enter the substring : ");
    gets(b);
    int count = 0,i,j = 0;
    while(b[count]!='\0')
    {
        count++;
    }

    for(i=0 ; (a[i] != '\0') && (b[j] != '\0'); i++)
    {
        if(a[i] == b[j])
            j++;
    }
    if(j == count)
     printf("\nSubstring found at position %d.\n",i-j+1);
    else
     printf("\nSubstring is not found\n");

        return 0;

}