#include<iostream>


struct node
{
        int data;
        node* next;

        node(int e)
        {
                data = e;
                next = nullptr;
        }

};

class queue
{
 private:
        node* front;
        node* rear;
 public:
        queue(){front = rear = nullptr;}
        void enqueue(int);
        int dequeue();
        void display();
        bool isEmpty();
};

class stack
{
 private:
        queue q1;
        queue q2;
 public:
        void push(int);
        int pop();
        void display();
};
bool queue::isEmpty()
{
        if(front == nullptr)
                return true;
        return false;
}
void queue::enqueue(int e)
{
        node* newNode = new node(e);
        if(front == nullptr)
                front = rear = newNode;

        else
        {
                rear->next = newNode;
                rear = newNode;
        }
}

int queue::dequeue()
{
        int r = -1;
        if(front == nullptr)
                std::cout << "Queue Underflow!!!\n";
        else
        {
                node* p = front;
                front = front->next;
                r = p->data;
                delete p;
        }
        return r;
}

void queue::display()
{
        if(front == nullptr)
                std::cout << "Queue is Empty\n";
        else
        {
                node* p = front;
                std::cout << "Queue is: \n";
                while(p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << std::endl;
        }
        
}

void stack::push(int e)
{
        //dequeue everything from q1 to q2

        while(q1.isEmpty() != true)
                q2.enqueue(q1.dequeue());
        
        q1.enqueue(e);

        while(q2.isEmpty() != true)
                q1.enqueue(q2.dequeue());
}

int stack::pop()
{
        return q1.dequeue();
}

void stack::display()
{
        q1.display();
}


//driver code

int main()
{
        stack stk;
        stk.push(10);
        stk.push(20);
        stk.push(30);
        stk.push(40);

        stk.display();

        stk.pop();

        stk.display();

        stk.push(50);

        stk.display();
}
