#include<stdio.h>

char* removeConsecutiveDuplicates(char *input)
{
   if(input[0] == '\0')
    return input;
    
   if(input[0] == input[1])
     {
       int k = 0;
       while(input[k] != '\0')
        {
          input[k] = input[k+1];
          k++;
         }
       removeConsecutiveDuplicates(input);
     }
        
    removeConsecutiveDuplicates(input+1);
    return input;
}

int main()
{
    char input[1000];
    gets(input);
    printf("%s\n",removeConsecutiveDuplicates(input));
    return 0;
}