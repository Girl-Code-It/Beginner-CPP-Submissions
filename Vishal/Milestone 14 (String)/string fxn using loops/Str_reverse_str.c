#include<stdio.h>

int main()
{
    char a[20],temp;
    printf("Enter string : ");
    gets(a);

    int count = 0;
    while(a[count] != '\0')
        count++;

    for(int i=0; i<count/2; i++)
         {
             temp = a[i];
             a[i] = a[count - 1 - i];
             a[count - 1 - i] = temp;
         }

    printf("\nReverse string is %s\n",a);
    return 0;
}