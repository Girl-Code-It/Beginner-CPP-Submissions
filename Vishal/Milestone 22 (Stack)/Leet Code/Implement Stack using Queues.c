typedef struct 
{
    int queue[100];
    int top;
    int bottom;
    int size;
}MyStack;

MyStack* myStackCreate() 
{
    MyStack *obj = malloc(sizeof(MyStack));
    obj -> top = 0;
    obj -> bottom = 0;
    obj -> size = 0;
    return obj;
}

void myStackPush(MyStack* obj, int x) 
{
    obj -> size++;
    obj -> queue[obj -> top] = x;
    obj -> top = (obj -> top+1)%100;
}

int myStackPop(MyStack* obj) 
{
    obj -> size--;
    obj -> top = (obj -> top - 1)%100;
    return obj->queue[(obj -> top)%100];
}

int myStackTop(MyStack* obj) 
{
  return obj -> queue[(obj -> top - 1)%100];
}

bool myStackEmpty(MyStack* obj) 
{
    if(obj -> size == 0) 
      return true;
    else 
      return false;
}

void myStackFree(MyStack* obj) 
{
    free(obj);
}