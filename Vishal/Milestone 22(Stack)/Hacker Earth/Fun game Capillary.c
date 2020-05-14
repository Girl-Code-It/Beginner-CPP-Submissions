#include<stdio.h>

typedef struct {
    int data;
    struct Stack* next;
} stack;

stack *top = NULL;

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

int main()
{
    int n;
    scanf("%d",&n);
    int List[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&List[i]);
        Push(List[i]);
    }
    int i = 0;
    
    while(top && i < n)
    {
       if(List[i] > Top())
        {
          printf("1 ");
          Pop();
        }
       else if(List[i] == Top())
        {
          printf("0 ");
          i++;
          Pop();
        }
       else 
        {
          printf("2 ");
          i++;
        }
    }

    return 0;
}