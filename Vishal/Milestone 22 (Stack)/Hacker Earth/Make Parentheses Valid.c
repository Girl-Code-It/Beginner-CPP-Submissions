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

int Minimum_add(char *str)
{
   int count = 0;
   int len = strlen(str);

   for(int i=0;i<len;i++)
    {
       if(str[i] == '(')
        Push(str[i]);
       else
        {
           char x = Top();
        
           if(x == ')' || top == NULL)
            count++;
           else
            Pop();
        }
    }
    while(top)
    {
      count++;
      Pop();
    }
    return count;
}
int main()
{
    char str[1000000];
    scanf(" %s",str);
    
    printf("%d\n",Minimum_add(str));
   
    return 0;
}