struct ListNode* Reverse(struct ListNode* head)
{
   struct ListNode *prev,*next;
    prev = NULL;

    while(head)
    {
        next = head -> next ;
        head -> next  = prev;
        prev = head;
        head = next;
    }

    return prev;
}

bool isPalindome(struct ListNode* head)
{
   struct ListNode *slow = head,*fast = head;

   while(fast && fast -> next)
   {
      slow = slow -> next;
      fast = fast -> next -> next;
   }

  //Next half of List is Reverse 
  //And check With first half
   slow = Reverse(slow);

   while(slow)
   {
      if(slow -> val != head -> val)
       return false;
    
     slow = slow -> next;
     head = head -> next;
   }
   
   return true;
}