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
    int maxDepth(Node *root)
    {
        if (!root)
            return 0;

        return 1 + maxDepth(root->left), maxDepth(root->right);
    }
};

int main()
{
}