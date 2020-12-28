#include <iostream>

using namespace std;

struct node
{
        int data;
        node *next;

        node() {}
        node(int e) { data = e, next = nullptr; }
};

struct Queue
{
        node *front, *rear;
        Queue()
        {
                front = rear = nullptr;
        }
        void enqueue(int e);
        int dequeue();
        void display();
};

void Queue::enqueue(int e)
{
        node *p = new node(e);
        if (front == nullptr)
                front = rear = p;
        else
        {
                rear->next = p;
                rear = p;
        }
}

int Queue::dequeue()
{       
        int x = -1;
        if (front == nullptr)
                std::cout << "Queue Underflow!!!\n";
        else
        {

                node *p = front;
                x = p->data;
                front = front->next;
                delete p;
        }
        return x;
}

void Queue::display()
{
        if(front == nullptr)
                std::cout << "Queue is Empty\n";
        else
        {
                node* p = front;
                std::cout << "Queue is:\n";
                while(p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << "\n";
        }    
}

//driver code

int main()
{
        Queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);

        q.display();

        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();

        q.display();
}
