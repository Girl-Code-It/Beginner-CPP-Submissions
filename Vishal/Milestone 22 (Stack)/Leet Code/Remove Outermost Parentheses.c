#include<stdio.h>
#include<stdlib.h>

char * removeOuterParentheses(char * S) 
{
    char *str = malloc(sizeof(char) * strlen(S));
    int flag = 0,p = 0;
    for (int i = 0; i < strlen(S); i++) 
    {
        if (S[i] == '(') 
        {
            flag++;
            
            if (flag != 1)
                str[p++] = S[i];
        } 
        else 
        {
            flag--;
            if(flag != 0)
                str[p++] = S[i];
        }
        
    }
    str[p] = '\0';
    return str;
}

int main()
{
   char S[20000];
   printf("Enter the Sequences\n");
   scanf("%s",S);

   printf("%s\n",removeOuterParentheses(S));

}