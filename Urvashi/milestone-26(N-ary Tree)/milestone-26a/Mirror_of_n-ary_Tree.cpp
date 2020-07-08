void mirrorTree(Node * root) 
{ 
    // Base case: Nothing to do if root is NULL 
    if (!root) 
        return; 
  
    // Number of children of root 
    int n = root->child.size(); 
  
    // If number of child is less than 2 i.e. 
    // 0 or 1 we do not need to do anything 
    if (n < 2) 
        return; 
  
    // Calling mirror function for each child 
    for (int i=0; i<n; i++) 
        mirrorTree(root->child[i]); 
  
    // Reverse vector (variable sized array) of child 
    // pointers 
    reverse(root->child.begin(), root->child.end()); 
} 
