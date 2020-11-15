//Insert a node at head position
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = llist;
    llist=newNode;
    return llist;
}
