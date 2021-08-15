class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return NULL;
        Node *head_cp = NULL, *curr = head, *curr_cp = NULL;

        while (curr)
        {
            curr_cp = new Node(curr->val, curr->next, NULL);
            curr->next = curr_cp;
            curr = curr_cp->next;
        }

        curr = head;
        while (curr)
        {
            if (curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        curr = head;
        head_cp = curr->next;
        while (curr)
        {
            curr_cp = curr->next;
            curr->next = curr_cp->next;
            curr = curr->next;
            if (curr)
                curr_cp->next = curr->next;
        }
        return head_cp;
    }
};