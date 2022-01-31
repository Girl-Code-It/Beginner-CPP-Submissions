//Creating linked list and displaying it 
#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
int main() 
{
 
    int A[] = {3, 5, 7, 10, 15,22};
 
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = nullptr;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<6; i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
 
    // Display Linked List
    Node* p = head;
 
    while (p != nullptr){
        cout << p->data<<" " ;
        p = p->next;
    }
 
    return 0;
}
