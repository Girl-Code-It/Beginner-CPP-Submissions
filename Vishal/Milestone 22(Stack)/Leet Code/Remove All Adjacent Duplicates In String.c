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

char Top()
{
    if(top)
        return top -> data;
}

char *super_Reduced(char *str)
{
    int len = strlen(str),pop_count = 0,push_count = 0;

    for(int i=0; i<len; i++)
    {
        if(top == NULL || str[i] != Top())
        {
            Push(str[i]);
            push_count++ ;
        }
        else
        {
            Pop();
            pop_count++ ;
        }
    }
    //Total Element remaining in the string
    int size = push_count - pop_count;

    if(!size)
        printf("Empty String");
    else
    {
        int i = 0;
        while(i < size)
        {
            str[size - 1 - i] = Top();
            Pop();
            i++;
        }
        str[i] = '\0';
    }
    return str;
}

int main()
{
    char str[1000000];
    scanf(" %s",str);

    printf("%s\n",super_Reduced(str));

    return 0;
}