int countLeaves(Node* root)
{
    if(!root)
        return 0;
        
    Node* temp = root;
    queue<Node*>q;
    q.push(temp);
    
    int count = 0,level_size;
    
    while(!q.empty())
    {
        level_size = q.size();
        for(int i=0;i<level_size;i++)
        {
            temp = q.front();
            q.pop();
            
            if(temp -> left)
                q.push(temp ->left);
            
            if(temp -> right)
                q.push(temp -> right);
            
            if(!temp -> left && !temp -> right)
                count++;
     
        }
    }
    return count;
}