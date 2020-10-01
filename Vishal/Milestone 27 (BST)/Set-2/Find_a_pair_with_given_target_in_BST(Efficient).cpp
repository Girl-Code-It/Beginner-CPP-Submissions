bool isPairPresent(struct Node* root,int target)
{
    if(!root)
        return false;

    stack<Node*>s1,s2;

    int done1 = 0, done2 = 0,val1,val2;
    Node *curr1 = root, *curr2 = root;

    while(1)
    {
        while(!done1)
        {
            while(curr1)
            {
                s1.push(curr1);
                curr1 = curr1 -> left;
            }
            if(s1.empty())
                done1 = 1;
            else
            {
                curr1 = s1.top();
                s1.pop();
                val1 = curr1 -> data;
                curr1 = curr1 -> right;
                done1 = 1;
            }
        }

        while(!done2)
        {
            while(curr2)
            {
                s2.push(curr2);
                curr2 = curr2 -> right;
            }
            if(s2.empty())
                done2 = 1;
            else
            {
                curr2 = s2.top();
                s2.pop();
                val2 = curr2 -> data;
                curr2 = curr2 -> left;
                done2 = 1;
            }
        }

        if((val1 != val2) && val1 + val2 == target)
            return true;

        else if(val1 + val2 < target)
            done1 = 0;

        else if(val1 + val2 > target)
            done2 = 0;

        if(val1 >= val2)
            return false;

    }
}