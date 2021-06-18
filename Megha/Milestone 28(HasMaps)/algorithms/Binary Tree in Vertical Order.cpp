// C++ program for printing vertical order
// of a given binary tree usin BFS.
#include <bits/stdc++.h>
 
using namespace std;
 
// Structure for a binary tree node
struct Node {
    int key;
    Node *left, *right;
};
 
// A utility function to create a new node
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}
 
// The main function to print vertical oder of a
// binary tree with given root
void printVerticalOrder(Node* root)
{
    // Base case
    if (!root)
        return;
 
    // Create a map and store vertical oder in
    // map using function getVerticalOrder()
    map<int, vector<int> > m;
    int hd = 0;
 
    // Create queue to do level order traversal.
    // Every item of queue contains node and
    // horizontal distance.
    queue<pair<Node*, int> > que;
    que.push(make_pair(root, hd));
 
    while (!que.empty()) {
        // pop from queue front
        pair<Node*, int> temp = que.front();
        que.pop();
        hd = temp.second;
        Node* node = temp.first;
 
        // insert this node's data in vector of hash
        m[hd].push_back(node->key);
 
        if (node->left != NULL)
            que.push(make_pair(node->left, hd - 1));
        if (node->right != NULL)
            que.push(make_pair(node->right, hd + 1));
    }
 
    // Traverse the map and print nodes at
    // every horigontal distance (hd)
    map<int, vector<int> >::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        for (int i = 0; i < it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}
 
// Driver program to test above functions
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->right->right->left->right->right = newNode(12);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);
    return 0;
}
