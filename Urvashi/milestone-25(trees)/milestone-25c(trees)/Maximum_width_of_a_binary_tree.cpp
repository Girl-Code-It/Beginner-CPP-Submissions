class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) 
	{
        if(root == NULL) return 0;
        
        deque<TreeNode*> Q;
        
        Q.push_back(root);
        
        int width,maxWidth=INT_MIN;
        while(!Q.empty())
		{
            //Remove all leading nulls
            while(Q.size() > 0 && Q.front() == NULL)
			{
                Q.pop_front();
            }
            
			//If after removing all leading null, the deque is empty that means whole tree has been traversed. So stop BFS
            if(Q.size() == 0) 
			    break;
            
			//Remove trailing null
            while(Q.size() > 0 && Q.back() == NULL)
			{
                Q.pop_back();
            }
            
			//Check whether it results in empty deque.
            int size = Q.size();
            if(size == 0) 
			    break;
            
			//size variable is size of level.
            maxWidth = max(maxWidth,size);
            
			//To push child nodes of the current level into the deque. Push NULL for NULL and leaf nodes.
            for(int i=0;i<size;i++)
			{
                TreeNode* temp = Q.front();
                Q.pop_front();
                
                if(temp == NULL)
				{
                    Q.push_back(NULL);
                    Q.push_back(NULL);
                    continue;
                }
                
                if(temp->left && temp->right)
				{
                    Q.push_back(temp->left);
                    Q.push_back(temp->right);
                }
                
                else if(temp->left)
				{
                    Q.push_back(temp->left);
                    Q.push_back(NULL);
                }
                
                else if(temp->right)
				{
                    Q.push_back(NULL);
                    Q.push_back(temp->right);
                }
                
                else
				{
                    Q.push_back(NULL);
                    Q.push_back(NULL);
                }
                
            }
        }
        
        return maxWidth;
