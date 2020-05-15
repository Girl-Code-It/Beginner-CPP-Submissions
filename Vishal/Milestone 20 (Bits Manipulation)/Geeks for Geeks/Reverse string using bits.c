#include<stdio.h>

//Reverse String
int main()
{ 
   char str[50];
   printf("Enter the string : ");
   scanf("%s",str);

   int start = 0,end = strlen(str) - 1;
   
   while(start < end)
   {
       str[start] ^= str[end];
       str[end] ^= str[start];
       str[start] ^= str[end];
    
       start++;
       end--;
   }
   
   printf("\nReverse String : %s\n",str);
   return 0;
}