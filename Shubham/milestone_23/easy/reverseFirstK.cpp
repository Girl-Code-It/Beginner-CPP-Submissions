#include<iostream>
#include<vector>

struct node
{
        int data;
        node* next;

        node(int e){data = e; next = nullptr;}
        node(int e, node* nxt)
        {
                data = e;
                next = nxt;
        }
};

class queue
{
 private:
        node* front;
        node* rear;
        
 public:
        queue()
        {
                front = rear = nullptr;
        }
        void enqueue(int);
        int dequeue();
        void display();
        node* findFront();
};

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
        if(front == nullptr)
                std::cout << "queue Underflow!!!!\n";
        else
        {
                node* p = front;
                int r = p->data;
                front = front->next;
                delete p;
                return r;
        }
        return -1;
}
void queue::display()
{
        if(front == nullptr)
                std::cout << "queue is Empty\n";
        else
        {
                std::cout << "Queue is :\n";
                node* p = front;

                while(p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << std::endl;
        }
}

node* queue::findFront()
{
        return front;
}
//driver code

void reverseFirstK(queue &q, int k)
{
        //store first k elements in an array
        std::vector<int>A;
        node* p = q.findFront();
        for(int i=0; i<k; i++)
        {
                A.push_back(p->data);
                p = p->next;
        }
        p = q.findFront();
        for(int i = A.size()-1; i >= 0; i--)
                p->data = A[i], p = p->next;
}

int main()
{
        queue q;

        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        
        q.display();

        reverseFirstK(q, 3);

        q.display();
}
