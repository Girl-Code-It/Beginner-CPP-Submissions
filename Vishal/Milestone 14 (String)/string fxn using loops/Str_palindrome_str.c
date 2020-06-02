#include<stdio.h>

int main()
{
    char a[20];
    printf("Enter first string : ");
    gets(a);

    int count = 0;
    while(a[count]!='\0')
    {
      count++;
    }
    
    for(int i=0;i<count;i++)
    {
       if(a[i] != a[count-1-i]) 
       {
          printf("\nString is not palindrome.\n");
          return 0;
       }
    }
    
    printf("\nString is palindrome.\n");
    return 0;

}