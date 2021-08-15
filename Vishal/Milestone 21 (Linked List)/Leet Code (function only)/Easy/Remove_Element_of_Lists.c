#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

Node *head = NULL;

void Insert(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));

    temp->data = x;

    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else
    {
        Node *temp1 = head;

        while (temp1->next != NULL)
            temp1 = temp1->next;

        temp1->next = temp;
    }
}

void Print()
{
    Node *temp = head;

    printf("\nList is : ");

    while (temp != NULL)
    {
        printf("%d ", (*temp).data);
        temp = (*temp).next;
    }

    printf("\n");
}

Node *removeElements(Node *head, int val)
{
    if (head == NULL)
        return head;

    //As we check Current Next element
    //We Use some Dummy Node at starting
    Node *current = (Node *)calloc(1, sizeof(Node));
    current->next = head;
    head = current;

    while (current->next)
    {
        if (current->next->data == val && current->next->next == NULL)
            current->next = NULL;

        else if (current->next->data == val)
            current->next = current->next->next;

        else
            current = current->next;
    }

    return head->next;
}

int main()
{
    int n, x, val;
    printf("How many Number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d", &x);
        Insert(x);
    }
    Print();
    printf("\nWhich Number You Want to Delete");
    scanf("%d", &val);
    head = removeElements(head, val);
    Print();
    return 0;
}