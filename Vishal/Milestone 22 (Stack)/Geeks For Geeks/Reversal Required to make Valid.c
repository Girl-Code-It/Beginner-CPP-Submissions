#include <stdio.h>
#include <stdlib.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int size;
    char* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack ->top = -1;
    stack ->size = 0;
    stack ->capacity = capacity;

    stack->array = (char*) malloc(stack->capacity * sizeof(char));

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char Pop(struct Stack* stack)
{
    stack -> size--;
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void Push(struct Stack* stack,char op)
{
    stack->array[++stack->top] = op;
    stack -> size++;
}

int makeValid(char *exp)
{
    int n = strlen(exp),m = 0;

    if(n%2)
        return -1;
    struct Stack* stack = createStack(n);

    for(int i = 0; i<n; i++)
    {
        if(exp[i] == ')' && !isEmpty(stack))
        {
            if(peek(stack) == '(')
                Pop(stack);
            else
                Push(stack,exp[i]);

        }
        else
            Push(stack,exp[i]);
    }
    int l = stack -> size;
    while(!isEmpty(stack) && peek(stack) == '(')
    {
        m++;
        Pop(stack);
    }

    return (l/2 + m%2);
}

int main()
{
    char exp[100];
    printf("Enter The sequence : ");
    gets(exp);
    printf("Reversal Required for Valid String is %d.\n",makeValid(exp));
    return 0;
}