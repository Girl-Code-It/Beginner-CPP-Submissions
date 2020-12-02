#include <iostream>

using namespace std;

struct node
{
        int data;
        node *next;
};
node *head = NULL;

void insert()
{
        int data, pos;
        cout << "Enter the position where you want to insert \n";
        cin >> pos;
        cout << "Enter the value\n";
        cin >> data;

        node* p = new node;
        p->data = data;

        node* temp = head;
        node*  x= temp;
        for(int i=0; i<pos; i++)
        {
                x = temp;
                temp = temp->next;
        }
        x->next = p;
        p->next = temp;
}

void insertAtBegin()
{
        int data;
        cout << "Enter the value you want to insert\n";
        cin >> data;

        node* p = new node;
        p->data = data;
        p->next = head;
        head = p;
}

void create()
{
        int data;
        cout << "Enter the value to append\n";
        cin >> data;
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;

        if (head == NULL)
                head = temp;
        else
        {
                node *temp2 = head;

                while (temp2->next != NULL)
                {
                        temp2 = temp2->next;
                }
                temp2->next = temp;
        }
}

void display()
{
        node *temp = head;
        while (temp != NULL)
        {
                printf("Data : %d       Address : %u    Next Address : %u\n", temp->data, temp, temp->next);
                temp = temp->next;
        }
}

void deleteNode()
{
        int pos;
        cout << "Enter the position where you want to delete node\n";
        cin >> pos;

        node* temp = head;
        node* x;

        for(int i=0; i<pos; i++)
        {
                x = temp;
                temp = temp->next;
        }
        temp = temp->next;
        x->next = temp;
}

int main()
{

        printf("1. Append\n");
        printf("2. Display\n");
        printf("3. Insert a node at beginning\n");
        printf("4. Insert at a position\n");
        printf("5. Delete a Node\n");
        printf("6. Exit\n");
        
        while (1)
        {
                printf("Enter your choice\n");
                int choice;
                cin >> choice;
                switch (choice)
                {
                case 1:
                        create();
                        break;
                case 2:
                        display();
                        break;
                case 3:
                        insertAtBegin();
                        break;
                case 4:
                        insert();
                        break;
                case 5:
                        deleteNode();
                        break;
                case 6:
                        exit(0);
                        break;
                default:
                        cout << "Please enter a valid choice\n";
                }
        }
}
