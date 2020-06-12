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

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char Pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void Push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}

// to Evaluate postfix expression.
int EvalPostfix(char* exp)
{
    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(strlen(exp));
    if(!stack) // See if stack was created successfully
        return -1 ;

    for (int i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand.
        if (isdigit(exp[i]))
            Push(stack,exp[i] - '0');
        else
        {
            int val = Pop(stack);
            int val1 = Pop(stack);

            switch(exp[i])
            {
            case '+' :
                Push(stack,val + val1);
                break;
            case '-' :
                Push(stack,val1 - val);
                break;
            case '*' :
                Push(stack,val1*val);
                break;
            case '/' :
                Push(stack,val1/val);
                break;
            }
        }
    }
    return Pop(stack);
}

int main()
{
    char exp[100];
    printf("Enter The Expression : ");
    gets(exp);
    printf("Ans is %d.\n",EvalPostfix(exp));
    return 0;
}