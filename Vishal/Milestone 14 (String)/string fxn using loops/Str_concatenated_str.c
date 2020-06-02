#include<stdio.h>

int main()
{
    char a[20],b[20],c[30];
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);
   
    int i=0,j=0;
    
    while(a[i]!='\0')
    {
      c[j] = a[i];
      i++;
      j++;
    }
    
    i=0;//index of second string 
    
    while(b[i]!='\0')
    {
      c[j] = b[i];
      i++;
      j++;
    }
    
    c[j] = '\0';
    
    printf("Concatenated string : %s",c);
    return 0;

}