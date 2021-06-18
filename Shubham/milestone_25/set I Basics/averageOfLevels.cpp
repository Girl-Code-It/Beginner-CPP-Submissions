class Solution {
public:
    
    double findAverage(vector<int>A)
    {
        double sum = 0;
        for(auto it = A.begin(); it != A.end(); it++)
           sum += *it;
        
        double average = sum/A.size();
        
        return average;
        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<int>A;
        vector<double>r;
        
        if(root == nullptr)
            return r;
        
        queue<TreeNode*>q;
        
        q.push(root);
        q.push(nullptr);
        
        while(q.empty() == false)
        {
            
            root = q.front();
            
            if(root != nullptr)
            {
                q.pop();
                A.push_back(root->val);
                
                if(root->left != nullptr)
                    q.push(root->left);
            
                if(root->right != nullptr)
                    q.push(root->right);
            
            }
            
            else
            {
                double average = findAverage(A);
                r.push_back(average);
                A.erase(A.begin(), A.end());
                q.pop();
                
                if(q.empty() == true)
                    break;
                
                q.push(nullptr);
            }
        }
        return r;
    }
};
