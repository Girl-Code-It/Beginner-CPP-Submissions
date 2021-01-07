#include <iostream>

struct node
{
        int data;
        node *next;

        node(int e)
        {
                data = e;
                next = nullptr;
        }
        node(int e, node *nxt)
        {
                data = e;
                next = nxt;
        }
};

class queue
{
private:
        node *front;
        node *rear;

public:
        void enqueue(int e);
        int dequeue();
        void display();
        bool isEmpty();
};
class stack
{
private:
        node *top;

public:
        stack() { top = nullptr; }

public:
        void push(int e);
        int pop();
        void display();
        bool isEmpty();
};

void queue::enqueue(int e)
{
        node *newNode = new node(e);
        if (front == nullptr)
                front = rear = newNode;
        else
        {
                rear->next = newNode;
                rear = newNode;
        }
}
int queue::dequeue()
{
        if (front == nullptr)
                std::cout << "Queue Underflow !!!\n";
        else
        {

                node *p = front;
                int r = front->data;
                front = front->next;
                delete p;
                return r;
        }
        return -1;
}
bool queue::isEmpty()
{
        if (front == nullptr)
                return true;
        return false;
}
void queue::display()
{
        if (isEmpty() == true)
                std::cout << "Queue is Empty\n";
        else
        {
                std::cout << "Queue is :\n";
                node *p = front;

                while (p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << std::endl;
        }
}

void stack::push(int e)
{
        node *newNode = new node(e, top);
        top = newNode;
}
int stack::pop()
{
        if (top == nullptr)
                std::cout << "Stack Underflow !!!\n";
        else
        {

                node *p = top;
                int r = p->data;
                top = top->next;
                delete p;
                return r;
        }
        return -1;
}

void stack::display()
{
        if (top == nullptr)
                std::cout << "Stack is Empty\n";
        else
        {
                node *p = top;
                std::cout << "Stack is: \n";

                while (p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << std::endl;
        }
}
bool stack::isEmpty()
{
        if(top == nullptr)     
                return true;
        return false;
}
//driver code
void rev(queue* q)
{
        //push each element in a stack
        stack s;

        while(q->isEmpty() != true)
                s.push(q->dequeue());

        //pop each element of stack in queue

        while(s.isEmpty() != true)
                q->enqueue(s.pop());
}

int main()
{
        queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        
        q.display();

        rev(&q);

        q.display();

}
