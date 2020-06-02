#include<stdio.h>  

int main()
{
    char a[20];
    printf("Enter string : ");
    gets(a);
    
    for(int i=0;a[i] != '\0'; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    }

    printf("\nString in lower case %s.\n",a);

    return 0;

}