// core logic is we are storing all the nodes either left or right node at a level in a vector and then taking average .

class Solution
{
public:
    vector<double> averageOfLevels(TreeNode *root)
    {

        vector<double> result;

        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty()) // if queue is not empty.
        {
            int n = q.size(); // size of queue.

            vector<double> temp;

            while (n--) // until queue is empty.
            {
                TreeNode *t = q.front();

                temp.push_back(t->val);
                q.pop();

                if (t->left)
                    q.push(t->left);

                if (t->right)
                    q.push(t->right);
            }

            if (temp.size() == 1) // if binary tree is having only one element
                result.push_back(temp[0]);

            else if (temp.size() > 1)
            {

                double sum = 0;

                for (int i = 0; i < temp.size(); i++)
                {
                    sum += temp[i];
                }

                result.push_back(sum / temp.size());
            }
        }
        return result;
    }
};
