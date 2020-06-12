struct stack {
    int val;
    int min;
    struct stack* next;
};

typedef struct
{
   struct stack* top;
} MinStack;

MinStack *minStackCreate() 
{
    MinStack *stk = (MinStack*)malloc(sizeof(MinStack));
    stk -> top = NULL;
    return stk;
}

void minStackPush(MinStack *stack, int element)
{
    struct stack* neu = malloc(sizeof(struct stack));
    neu -> val = element;
    neu -> min = (stack -> top && stack -> top -> min < element) ? stack->top->min : element;
    neu -> next = stack -> top;
    stack -> top = neu;
}

void minStackPop(MinStack *stack) 
{
    struct stack* temp = stack -> top;
    stack -> top = stack -> top -> next;
    free(temp);
}

int minStackTop(MinStack *stack) 
{
    return stack -> top -> val;
}

int minStackGetMin(MinStack *stack) 
{
    return stack -> top -> min;
}

void minStackFree(MinStack *stack) 
{
    while(stack -> top) 
      minStackPop(stack);
}