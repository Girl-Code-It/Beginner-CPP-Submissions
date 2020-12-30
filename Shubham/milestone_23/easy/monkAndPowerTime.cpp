#include <iostream>
#include<vector>

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
        if (front == nullptr)
                std::cout << "Queue is Empty\n";
        else
        {
                node *p = front;
                std::cout << "Queue is:\n";
                while (p != nullptr)
                {
                        std::cout << p->data << "\t";
                        p = p->next;
                }
                std::cout << "\n";
        }
}

//Monk's favourate

int monkTask(Queue &q, vector<int> &A)
{

        int time = 0;
        for(int i=0; i<A.size();)
        {
                if(q.front->data == A[i])
                {
                        i++, time++;
                        q.dequeue();
                }
                else
                {
                        int x = q.dequeue();
                        q.enqueue(x);
                        time++;
                }
        }
        return time;
}

//driver code

int main()
{
	int N;
	vector<int> A;
	Queue q;
	cin >> N;
	for(int i=0; i<N; i++)
	{
		int data;
		cin >> data;
		q.enqueue(data);
	}
	for(int i=0; i<N; i++)
        {
                int data;
                cin >> data;
		A.push_back(data);
        }

        cout << monkTask(q, A) << endl;
}
