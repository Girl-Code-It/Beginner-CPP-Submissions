#include <stdio.h>
#include <stdlib.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

int peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

int Pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return 0;
}

void Push(struct Stack* stack,int op)
{
    stack->array[++stack->top] = op;
}

int Max(int x,int y)
{
   return (x > y) ? x : y;
}

int findMaxLen(char *str)
{
   int n = strlen(str),Result = 0;
   struct Stack* stack = createStack(n);

   Push(stack,-1);

   for(int i=0;i<n;i++)
   {
     if(str[i] == '(')
     Push(stack,i);
    else
    {
      Pop(stack);
    
      if(! isEmpty(stack))
       Result = Max(Result,i-peek(stack));
      else
       Push(stack,i);
    }
   }
  return Result;
}

int main()
{
    char exp[100];
    printf("Enter The sequence : ");
    gets(exp);
    printf("Length of the Largest Valid String is %d.\n",findMaxLen(exp));
    return 0;
}