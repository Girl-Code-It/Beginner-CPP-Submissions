class FindElements {
public:
    unordered_map<int,int>m;
    FindElements(TreeNode* root) 
    {
        queue<TreeNode*>q;
        if(root)
        {
            root->val = 0;
            q.push(root);
            m[0]++ ;
            
            while(!q.empty())
            {
                TreeNode* temp = q.front() ;
                q.pop();
                int x = temp->val;
                if(temp->left)
                {
                    temp->left->val = 2*x + 1 ;
                    m[x*2 + 1]++ ;
                    q.push(temp->left);
                }
                
                if(temp->right)
                {
                    temp->right->val = 2*x + 2 ;
                    m[x*2 + 2]++ ;
                    q.push(temp->right);
                }
            }
        }   
    }
    
    bool find(int target) {
        return(m.find(target) != m.end()) ;
    }
};
