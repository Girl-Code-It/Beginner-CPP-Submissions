#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Stack
{
    char data;
    struct Stack* next;
} stack;

stack *top = NULL;

void Push(char x)
{
   stack *newNode = (stack*)malloc(sizeof(stack));

    if(!newNode)
    {
        printf("Stack is Full.\n");
        return;
    }
    newNode -> data = x;
    newNode -> next = top;
    top = newNode;
}

void Pop( )
{
    if(top)
     {
    stack *temp = top;
    top = temp -> next;
    free(temp);
    }
}

bool backspaceCompare(char *S,char *T)
{
    int i = 0,len = strlen(S);
    while(i < len)
    {
       if(S[i] != '#')
           Push(S[i]);
       else if(S[i] == '#' && top)
          Pop();
        
        i++;
    }
    
    i = 0;
    
    while(top)
    {
      S[i++] = top -> data;
      Pop();
    }
    
    S[i] = '\0';
    printf("%s",S);
    i = 0;
    len = strlen(T);
    
    while(i < len)
    {
       if(T[i] != '#')
           Push(T[i]);
       else if(T[i] == '#' && top)
          Pop();
        
        i++;
    }
    
    
    i = 0;
    while(top)
    {
      T[i++] = top -> data;
      Pop();
    }
    T[i] = '\0';
    printf("%s",T);
    
    int Equal = strcmp(S,T);
    
    return (Equal == 0);
}
int main()
{
    char S[1000],T[1000];
    scanf("%s %s",S,T);
    if(backspaceCompare(S,T))
    printf("true\n");
    else
    printf("false\n");
    return 0;
}