void reversePrint(SinglyLinkedListNode* head) {

    if(head==NULL)//base condition.
    return ;
    reversePrint(head->next);//first make recursive call.
    cout<<head->data<<endl; //  print the value in the node.

}

