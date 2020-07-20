void inorder(Node* root){
    if (! root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void merge(Node *root1, Node *root2)
{
   //Your code here
   stack<Node*> s1,s2;
   Node* cur1=root1,*cur2=root2;
   while(cur1)
   {
        s1.push(cur1);
        cur1=cur1->left;
   }
   
   while(cur2)
   {
        s2.push(cur2);
        cur2=cur2->left;
   }
   
   while(!s1.empty()||!s2.empty()){
       while(cur1)
	{
            s1.push(cur1);
            cur1=cur1->left;
       }
       while(cur2)
	{
            s2.push(cur2);
            cur2=cur2->left;
       }
       if(s1.empty())
	{
           cur2 = s2.top();
           s2.pop();
           cout<<cur2->data<<" ";
           inorder(cur2->right);
           cur2=NULL;
       }
       else if(s2.empty())
	{
           cur1 = s1.top();
           s1.pop();
           cout<<cur1->data<<" ";
           inorder(cur1->right);
           cur1=NULL;
       } 
	   else
	   {
               if(s1.top()->data < s2.top()->data)
		{
               cur1=s1.top();
               s1.pop();
               cout<<cur1->data<<" ";
               cur1=cur1->right;
           } else
		   {
               cur2=s2.top();
               s2.pop();
               cout<<cur2->data<<" ";
               cur2=cur2->right;
           }
       }
   }
}
