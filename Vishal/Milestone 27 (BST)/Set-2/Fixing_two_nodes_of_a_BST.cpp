void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

struct Node* correctBST(struct Node* root)
{
    if(!root)
        return NULL;

    stack<struct Node*>s;

    struct Node *curt = root,*prev,*first,*middle,*last;


    while(curt || !s.empty())
    {
        while(curt)
        {
            s.push(curt);
            curt = curt -> left;
        }

        curt = s.top();
        s.pop();

        if(prev && (prev->data > curt->data))
        {
            if(!first)
            {
                first = prev;
                middle = curt;
            }
            else
                last = curt;
        }

        prev = curt;
        curt = curt -> right;
    }

    if(first && last)
        swap(&(first->data),&(last->data));
    else if(first && middle)
        swap(&(first->data),&(middle->data));

    return root;
}