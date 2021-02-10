#include <iostream>
#include <string>

using namespace std;

struct node
{
      int data;
      node *next;
};

void push(node **top, int element)
{
      node *newNode = new node();
      newNode->data = element;
      newNode->next = *top;
      *top = newNode;

      cout << element << " Pushed Successfully.\n";
}
bool isEmpty(node *top)
{
      if (top == nullptr)
            return true;
      return false;
}
int pop(node **top)
{
      if (isEmpty(*top))
            cout << "Stack Underflow.\n";
      else
      {
            node *p = *top;
            int data = p->data;
            *top = (*top)->next;
            delete p;
            cout << data << " Popped out Successfully.\n";
            return data;
      }
      return '\0';
}

int peek(node *top)
{
      if (top == nullptr)
            return '\0';
      return top->data;
}

void display(node *top)
{
      if (top == nullptr)
            cout << "Stack is Empty\n";
      else
      {
            node *p = top;
            cout << "Stack is: \n";

            while (p != nullptr)
            {
                  cout << p->data << "\t";
                  p = p->next;
            }
            cout << endl;
      }
}       
  
int main()
{
      node* stk = nullptr;

      push(&stk, 10);
      push(&stk, 20);
      push(&stk, 30);

      display(stk);

      pop(&stk);

      display(stk);
}
