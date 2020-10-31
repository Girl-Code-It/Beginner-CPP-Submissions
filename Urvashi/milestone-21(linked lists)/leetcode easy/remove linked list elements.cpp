class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        while (head != NULL && head->val == val) // if list is not empty and value is matched with  head node.
        {
            head = head->next; // then fill the value of next element in head .
        }
        // taking a pointer current_node to store address of current node . lets take current as head first.
        ListNode *current_node = head;

        //if current node is not last and also its next node is not last.
        while (current_node != NULL && current_node->next != NULL)
        {
            //and if we find the value of the next node of current equals to val.
            if (current_node->next->val == val)
            {
                current_node->next = current_node->next->next; //just make next link to next to next link.
            }
            else
            {
                current_node = current_node->next; // else update the current node .
            }
        }
        return head;
    }
};
