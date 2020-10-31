// core logic is we have to check if we have traversed through left and right of a node if yes then print it.

class solution
{
public:
	void PostOrder(node *root)
	{
		node *current = root; // pointer to store address of current node.

		stack<int> s;

		while (current || !s.empty()) // either not a leaf node or stack is not empty
		{
			if (current) // if not a leaf node then push it
			{
				s.push(current);
				current = current->left; // go to left subtree.
			}

			else // if a leaf node or stack is empty
			{
				node *temp = s.top()->right; // pointer to store address of right child of node at top of the stack.

				if (!temp) // if top is a leaf node
				{
					temp = s.pop(); // then pop it and print it
					cout << temp->val;

					while (!s.empty() && temp == s.top()->right) // if stack is not empty and printed element is right child of top of stack
					{
						temp = s.pop(); // then pop and print it.
						cout << temp->val;
					}
				}

				else
					current = temp;
			}
		}
	}
};
