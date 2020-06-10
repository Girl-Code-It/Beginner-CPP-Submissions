#include<stdio.h>

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

int Top()
{
    if(top)
    return top -> data;
}

void super_Reduced(char *str)
{
   int len = strlen(str);

   for(int i=0;i<len;i++)
    {
       if(top == NULL || str[i] != Top())
        Push(str[i]);
       else
        {
            Pop();
        }
    }
    if(top == NULL)
      printf("Empty String");
    else
    {
     int i = 0;
     while(top)
     {
       str[i] = Top();
       Pop();
       i++;
     }
    
     while(i>0)
       printf("%c",str[--i]);
    }
}
int main()
{
    char str[1000000];
    scanf(" %s",str);
    
    super_Reduced(str);
   
    return 0;
}