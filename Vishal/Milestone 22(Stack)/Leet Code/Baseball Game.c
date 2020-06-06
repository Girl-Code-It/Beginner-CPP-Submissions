#include<stdio.h>
#include<stdlib.h>
typedef struct Stack
{
    int data;
    struct Stack* next;
} stack;

stack *top = NULL;

int isEmpty()
{
    return (top == NULL);
}

void Push(int x)
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
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return;
    }

    stack *temp = top;
    top = temp -> next;
    free(temp);
}

int Top()
{
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return 0;
    }
    
    return top -> data;
}

int callPoints(char **ops,int opsSize)
{
    int i = 0,score = 0,val,val1;
    while(i < opsSize)
    {
        if(strcmp(ops[i],"C") == 0)
         { 
            val = Top();
            Pop();
            score -= val;
         }
        else if(strcmp(ops[i],"D") == 0)
           {
             val = 2*Top();
             score += val;
             Push(val);
           }
        else if(strcmp(ops[i],"+") == 0)
        {
            val =  Top();
            Pop();
            val1 = Top();
            Pop();
            score += (val + val1);
            Push(val1);
            Push(val);
            Push(val + val1);
        }
        else
          {
            val = atoi(ops[i]);
            score += val;
            Push(val);
          }

        i++;
    }
    return score;
}