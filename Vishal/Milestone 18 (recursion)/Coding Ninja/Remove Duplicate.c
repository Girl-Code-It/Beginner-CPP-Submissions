#include<stdio.h>

char* removeConsecutiveDuplicates(char *input)
{
    static int i=0;
    int n = strlen(input);

    if(i == n)
        return input;
   for(int j = i+1;j<n;j++)
     {
       if(input[i] == input[i+1])
         {
           int k;
           for(k = j; k<n; k++)
              input[k] = input[k+1];

           input[k] = '\0';
           j--;
         }
     }
    
    i++;
    removeConsecutiveDuplicates(input);
    
}

int main()
{
    char input[1000];
    gets(input);
    printf("%s\n",removeConsecutiveDuplicates(input));
    return 0;
}