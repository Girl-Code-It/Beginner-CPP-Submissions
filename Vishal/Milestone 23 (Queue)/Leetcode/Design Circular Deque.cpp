#include<iostream>
#include<vector>
using namespace std;

class MyCircularDeque
{
public:
    vector <int> dq;
    int Size;
    /* Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k)
    {
        Size = k;
    }

    /* Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value)
    {
        if(dq.size() == Size)
            return false;

        dq.insert(dq.begin(),value);
        return true;
    }

    /* Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value)
    {
        if(dq.size() == Size)
            return false;

        dq.push_back(value);
        return true;
    }

    /* Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront()
    {
        if(dq.empty())
            return false;

        dq.erase(dq.begin());
        return true;
    }

    /* Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast()
    {
        if(dq.empty())
            return false;

        dq.erase(dq.begin() + dq.size() -1);
        return true;
    }

    /* Get the front item from the deque. */
    int getFront()
    {
        if(dq.empty())
            return -1;

        return dq[0];
    }

    /* Get the last item from the deque. */
    int getRear()
    {
        if(dq.empty())
            return -1;

        return dq.back();
    }

    /* Checks whether the circular deque is empty or not. */
    bool isEmpty()
    {
        return (dq.empty());
    }

    /* Checks whether the circular deque is full or not. */
    bool isFull()
    {
        return (dq.size() == Size);
    }
};

int main()
{
    MyCircularDeque* obj = new MyCircularDeque(5);
    bool p1 = obj->insertFront(5);
    bool p2 = obj->insertLast(3);
    int p5 = obj->getFront();
    int p6 = obj->getRear();
    bool p3 = obj->deleteFront();
    bool p4 = obj->deleteLast();
    bool p7 = obj->isEmpty();
    bool p8 = obj->isFull();

    cout << p1 << "\n"<< p2 << "\n"<< p3 << "\n"<< p4 << "\n"<< p5 << "\n"<< p6 << "\n"<< p7 << "\n"<< p8 << "\n";

    return 0;
}