typedef struct 
{
    int stack[100];
    int back;
    int front;
    int size;
}MyQueue;

MyQueue* myQueueCreate() 
{
    MyQueue *obj = malloc(sizeof(MyQueue));
    obj -> back=0;
    obj -> front=0;
    obj -> size=0;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) 
{
    obj -> size++;
    obj -> stack[obj -> back] = x;
    obj -> back = (obj -> back+1)%100;
}

int myQueuePop(MyQueue* obj) 
{
    obj -> size--;
    obj -> front = (obj -> front+1)%100;
    return obj->stack[(obj -> front-1)%100];
}

int myQueuePeek(MyQueue* obj) 
{
  return obj -> stack[obj -> front];
}

bool myQueueEmpty(MyQueue* obj) 
{
    if(obj -> size == 0) 
      return true;
    else 
      return false;
}

void myQueueFree(MyQueue* obj) 
{
    free(obj);
}