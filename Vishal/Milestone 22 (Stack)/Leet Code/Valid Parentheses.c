#include<stdio.h>
#include<stdbool.h>

bool isValid(char* s)
{
    int len = strlen(s);
    //If length of sequences is odd
    if(len%2)
        return false;

    char *stack = (char*)malloc(sizeof(len/2));
    int idx = 0;

    for(int i=0; i<len; ++i)
    {
        char cur = s[i];
        if(cur == '(' || cur=='{' || cur=='[')
        {
            if(idx == len/2)
                return false;
            stack[idx++] = cur;
        }
        else
        {
            if(idx == 0)
                return false;
            
            if(cur == '}' && stack[idx-1] == '{' || cur == ']' && stack[idx-1] == '[' || cur == ')' && stack[idx-1] == '(')
                idx--;
            else
                return false;
        }
    }

    free(stack);
    return idx == 0;
}

int main()
{
   char s[1000];
   printf("Enter The Sequence : ");
   scanf("%s",s);

   isValid(s) ? printf("Balanced\n") : printf("Not Balanced\n");
}