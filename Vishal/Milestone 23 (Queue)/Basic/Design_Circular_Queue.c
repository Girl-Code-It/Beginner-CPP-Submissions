#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct
{
    int *buffer,front,rear,size,current_size;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue *queue = (MyCircularQueue *)malloc(sizeof(MyCircularQueue));

    queue -> buffer = (int*)malloc(sizeof(int)*k);
    queue -> front = queue -> rear = -1;
    queue -> size = k;
    queue -> current_size = 0;

    return queue;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return (obj -> current_size <= 0);
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
    return ((obj -> current_size) == obj -> size - 1);
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if(myCircularQueueIsFull(obj))
        return false;

    else if(myCircularQueueIsEmpty(obj))
        obj -> front++;

    obj -> buffer[((obj -> rear + 1) % (obj -> size))] = value;
    obj -> current_size++;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return false;

    else if(obj -> front == obj -> rear)
        obj -> front = obj -> rear = -1;

    else
        obj -> front = (obj -> front++) % obj -> size;

    obj -> current_size--;

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return -1;

    return obj -> buffer[obj -> front];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return -1;

    return obj -> buffer[obj -> rear];
}

void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj -> buffer);
    free(obj);
}

int main()
{
    MyCircularQueue* obj = myCircularQueueCreate(5);
    bool param_1 = myCircularQueueEnQueue(obj, 4);

    bool param_2 = myCircularQueueDeQueue(obj);

    int param_3 = myCircularQueueFront(obj);

    int param_4 = myCircularQueueRear(obj);

    bool param_5 = myCircularQueueIsEmpty(obj);

    bool param_6 = myCircularQueueIsFull(obj);

    printf("%d %d %d %d",param_1,param_2,param_3,param_4);
    myCircularQueueFree(obj);

    return 0;
}