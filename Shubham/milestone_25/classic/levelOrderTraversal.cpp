#include <iostream>
#include <queue>
#include <vector>

using namespace std;
struct node
{
        int val;
        node *left;
        node *right;

        node(int e)
        {
                val = e;
                left = right = nullptr;
        }
};

vector<vector<int>> levelOrderTraversal(node *root)
{
        vector<vector<int>> f;
        vector<int> A;

        if (root == nullptr)
                return f;

        queue<node *> q;

        q.push(root);
        q.push(nullptr);

        while (q.empty() == false)
        {
                root = q.front();
                if (root != nullptr)
                {
                        q.pop();
                        A.push_back(root->val);
                        if (root->left != nullptr)
                                q.push(root->left);
                        if (root->right != nullptr)
                                q.push(root->right);
                }
                else
                {
                        q.pop();
                        f.push_back(A);
                        A.erase(A.begin(), A.end());
                        if(q.empty() == true) break;
                        q.push(nullptr);
                }
        }
        return f;
}

void printVector(vector<vector<int>> A)
{
        for (int i = 0; i < A.size(); i++)
        {
                for (int j = 0; j < A[i].size(); j++)
                        cout << A[i][j] << "\t";
                cout << endl;
        }
}

int main()
{
        node *root = new node(10);
        root->left = new node(16);
        root->right = new node(5);
        root->left->right = new node(-3);
        root->right->left = new node(6);
        root->right->right = new node(11);
        vector<vector<int>> A;
        A = levelOrderTraversal(root);

        printVector(A);

}
