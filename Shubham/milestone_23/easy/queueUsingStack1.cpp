#include<iostream>

struct node
{
        int data;
        node* next;

        node(int e, node* nxt)
        {
                data = e;
                next = nxt;
        }
};

class stack
{
 private:
        node* top;
 public:
        stack()
        {
                top = nullptr;
        }
        void push(int e);
        int pop();
        void display();
        bool isEmpty();

};

void stack::push(int e)
{
        node* newNode = new node(e, top);
        top = newNode;
}
int stack::pop()
{
        node* p =  top;
        top = top->next;
        int r = p->data;
        delete p;
        return r;
}
void stack::display()
{
        if(top == nullptr)
                std::cout << "Queue is Empty\n";
        else
        {
                std::cout << "Queue is :\n"; 
                node* p = top;
                while(p != nullptr)
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


class queue
{
 private:
        stack stk1;
        stack stk2;
 public:
        void enqueue(int e);
        int dequeue();
        void display();
};
void queue::enqueue(int e)
{
        stk1.push(e);
}
int queue::dequeue()
{
        while(stk1.isEmpty() != true)
                stk2.push(stk1.pop());
        
        int r = stk2.pop();

        while(stk2.isEmpty() != true)
                stk1.push(stk2.pop());
        
        return r;
}
void queue::display()
{
        stk1.display();
}


//driver code

int main()
{
        queue q;
        stack stk;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);

        stk.push(10);
        stk.push(20);
        stk.push(30);
        stk.push(40);

        q.display();
        stk.display();

        q.dequeue();
        stk.pop();

        q.display();
        stk.display();
}
