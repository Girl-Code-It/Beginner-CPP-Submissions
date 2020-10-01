#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int front,rear,size,*arr;
    unsigned capacity;
} Queue;

Queue* createQueue(unsigned capacity)
{
    Queue *queue = (Queue*)malloc(sizeof(Queue));

    queue -> capacity = capacity;
    queue -> front = queue -> size = 0;
    queue -> rear = capacity - 1;

    queue -> arr = (int*)malloc((queue -> capacity)*sizeof(int));

    return queue;
}

int isFull(Queue* queue)
{
    return (queue -> size == queue -> capacity);
}

int isEmpty(Queue* queue)
{
    return (queue -> size == 0);
}

int front(Queue* queue)
{
    if(isEmpty(queue))
        return -1;

    return queue -> arr[queue -> front];
}

int rear(Queue* queue)
{
    if(isEmpty(queue))
        return -1;

    return queue -> arr[queue -> rear];
}

void enQueue(Queue* queue,int data)
{
    if(isFull(queue))
        return;

    queue -> rear = (queue -> rear + 1) % queue -> capacity;
    queue -> arr[queue -> rear] = data;
    queue -> size++;
    printf("%d is enQueued\n",data);
}

int deQueue(Queue* queue)
{
    if(isEmpty(queue))
        return -1;

    int data = queue -> arr[queue -> front];
    queue -> front = (queue -> front + 1) % queue -> capacity;
    queue -> size--;

    return data;
}

int main()
{
    Queue* queue = createQueue(10);

    enQueue(queue,4);
    enQueue(queue,1);
    enQueue(queue,3);
    enQueue(queue,2);
    enQueue(queue,5);
    
    printf("Front of the Queue is %d.\n",front(queue));
    printf("Rear of the Queue is %d.\n",rear(queue));
    printf("deQueuing Element is %d.\n",deQueue(queue));
    printf("Front of the Queue is %d.\n",front(queue));
    printf("Rear of the Queue is %d.\n",rear(queue));
    return 0;
}