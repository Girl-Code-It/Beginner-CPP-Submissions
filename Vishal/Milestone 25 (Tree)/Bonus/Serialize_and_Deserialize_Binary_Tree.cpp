class Codec 
{
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root)
    {
        if(!root)
            return "#";
            
        return to_string(root->val) + ',' + serialize(root->left) + ',' + serialize(root->right);
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) 
    {
        if(data == "#")
            return NULL;
            
        stringstream s(data);
        return Deserialize(s);
    }
    
    TreeNode* Deserialize(stringstream &s)
    {
        string str;
        getline(s,str,',');
        
        if(str == "#")
            return NULL;
        
        TreeNode* newNode = new TreeNode(stoi(str));
        newNode->left = Deserialize(s);
        newNode->right = Deserialize(s);
      
        return newNode;
    }
};