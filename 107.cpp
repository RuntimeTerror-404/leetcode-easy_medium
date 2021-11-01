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
    vector<vector<int>> levelOrderBottom(Node *root)
    {
        vector<vector<int>> res;
        if (!root)
            return;
        queue<Node *> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int count = Q.size();
            vector<int> nodes_level;
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
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
}