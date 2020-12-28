#include<iostream>

using namespace std;


struct Queue
{
        int front, rear;
        unsigned size;
        int* A;

        Queue(int cap)
        {
                front = rear = 0;
                size = cap;
                A = new int[cap];
        }
        void enqueue(int e);
        int dequeue();
        void display();
};

void Queue::enqueue(int e)
{
        if((rear+1)%size == front)
                cout << "Queue is Full:\n";
        else
        {
                rear = (rear+1)%size;
                A[rear] = e;
        }
}

int Queue::dequeue()
{       
        int x = -1;
        if(front == rear)
                cout << "Queue is Empty\n";
        else
                x=A[front], front = (front+1)%size;
        return x;
}

void Queue::display()
{
        if(front == rear)
                cout << "Queue is Empty\n";
        else
        {
                cout << "Queue is: \n";
                for(int i=front+1; i != (rear+1)%size; i = (i+1)%size)
                        cout << A[i] << "\t";
                cout << endl;
        }
}

int main()
{
        Queue q(5);
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);

        q.display();

        q.dequeue();

        q.enqueue(50);
        q.enqueue(60);

        q.display();
}
