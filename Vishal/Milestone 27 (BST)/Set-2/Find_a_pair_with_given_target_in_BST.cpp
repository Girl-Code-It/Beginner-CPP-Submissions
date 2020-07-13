//This is simplest and accepted solution 
//time Complexity - O(n) & space Complexity - O(n)
//We have to find efficient solution having O(h) space Complexity.
bool isPairPresent(struct Node* root,int target)
{
    if(!root)
        return false;
        
    stack<Node*>s;

    vector<int>v;
    
    Node* curt = root;

    while(curt || !s.empty())
    {
        while(curt)
        {
            s.push(curt);
            curt = curt -> left;
        }
        
        curt = s.top();
        s.pop();
        v.push_back(curt -> data);
        curt = curt -> right;
    }

    int n = v.size(),sum,str = 0,end = n-1;
    while(str < end)
    {
        sum = v[str] + v[end];
        if(sum == target)
            return true;

        else if(sum < target)
            str++;
        else
            end--;
    }
    return false;
}