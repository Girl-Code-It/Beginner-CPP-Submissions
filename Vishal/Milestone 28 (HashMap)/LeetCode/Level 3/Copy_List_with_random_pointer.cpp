class Solution
{
public:
    Node* copyRandomList(Node* head)
    {
        Node *head_cp = nullptr, *cur = head, *cur_cp = nullptr;

        if (head == nullptr)
            return nullptr;

        while (cur != nullptr)
        {
            cur_cp = new Node(cur->val, cur->next, nullptr);
            cur->next = cur_cp;
            cur = cur_cp->next;
        }

        cur = head;
        while (cur != nullptr)
        {
            cur_cp = cur->next;
            if (cur->random) 
                cur_cp->random = cur->random->next;
            cur = cur_cp ->next;
        }

        cur = head;
        head_cp = head->next;
        while (cur != nullptr)
        {
            cur_cp = cur->next;
            cur->next = cur_cp->next;
            cur = cur->next;
            if (cur)
                cur_cp->next = cur->next;
        }
        return head_cp;
    }
};