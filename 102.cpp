#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class solution
{
    vector<vector<int>> levelOrder(Node *root)
    {
        if (!root)
            return {};
        vector<vector<int>> res;
        queue<Node *> Q;
        Q.push(root);
        while (!Q.empty())
        {
            vector<int> nodes_level;
            int count = Q.size();
            for (int i = 0; i < count; i++)
            {
                Node *node = Q.front();
                Q.pop();
                if (node->left)
                    Q.push(node->left);
                if (node->right)
                    Q.push(node->right);
                nodes_level.push_back(node->data);
            }
            res.push_back(nodes_level);
        }
    }
};

int main()
{
}