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
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));

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

void stockSpan(int *p,int n,int *s)
{
    struct Stack* stack = createStack(n);
    
    if(! stack)
    exit(1);
    Push(stack,0);
    s[0] = 1;
    
    for(int i=1;i<n;i++)
    {
       while(!isEmpty(stack) && p[peek(stack)] <= p[i])
       Pop(stack);
    
       s[i] = (isEmpty(stack)) ? (i+1) : (i - peek(stack));
    
       Push(stack,i);
    }
}

int main()
{
    int n;
    printf("Enter The Number of stocks : ");
    scanf("%d",&n);
    int span[n],prices[n];
    printf("Enter the prices : \n");
    for(int i = 0; i<n; i++)
        scanf("%d",&prices[i]);

    stockSpan(prices,n,span);
    printf("Stock span : \n");
    for(int i = 0; i<n; i++)
        printf("%d ",span[i]);
    return 0;
}