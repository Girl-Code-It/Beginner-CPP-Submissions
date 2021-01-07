#include<iostream>

using namespace std;

struct Queue
{
        int size;
        int front;
        int rear;
        int* A;
};

void create(Queue* q, int size)
{
        q->size = size;
        q->front = q->rear = -1;
        q->A = (int*)malloc(q->size* sizeof(int));
}

void enqueue(Queue* q, int x)
{
        if(q->rear >= q->size-1)
                cout << "Queue Overflow!!!\n";
        else
        {
                if(q->front == -1)
                        q->front++;
                q->rear++;
                q->A[q->rear] = x;
                cout << x << " Enqueued Successfully\n";
        }
}

void display(Queue* q)
{
        if(q->front > q->rear || q->front == -1)
                cout << "Queue is empty\n";

        else
        {
                cout << "Queue is \n";
                for(int i=q->front; i<=q->rear; i++)
                        cout << q->A[i] << "\t";
                cout << endl;
        }
        
}

void dequeue(Queue* q)
{
        if(q->front == -1 && q->rear == -1)
                cout << "Queue Underflow!!!\n";
        else if(q->front == q->rear)
                q->front = q->rear = -1;
        else
                q->front ++;
}

int main()
{
        struct Queue q;
        create(&q, 5);
        enqueue(&q, 10);
        enqueue(&q, 20);
        enqueue(&q, 30);
        enqueue(&q, 40);
        enqueue(&q, 50);

        display(&q);

        dequeue(&q);
        dequeue(&q);


        display(&q);
        
        dequeue(&q);
        dequeue(&q);
        dequeue(&q);
        dequeue(&q);

        display(&q);

}
