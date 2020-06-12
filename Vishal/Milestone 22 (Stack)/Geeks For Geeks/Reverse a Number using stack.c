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

int Reverse(int n)
{
    int temp = n,count = 0,reverse = 0,i = 1;

    while(temp)
    {
        count++;
        temp /= 10;
    }

    struct Stack* stack = createStack(count);

    while(n)
    {
        Push(stack,n%10);
        n /= 10;
    }

    while(!isEmpty(stack))
    {
        reverse += Pop(stack)*i;
        i *= 10;
    }

    return reverse;
}

int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    printf("Reverse of %d is %d.\n",n,Reverse(n));
    return 0;
}