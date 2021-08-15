#include<stdio.h>  

int main()
{
    char a[20];
    printf("Enter string : ");
    gets(a);
  
    for(int i=0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 32;
    }

    printf("\nString in upper case %s.\n",a);

    return 0;

}