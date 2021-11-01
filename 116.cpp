#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right, *next;
    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
        next = nullptr;
    };
};

class solution
{
    TreeNode *connect(TreeNode *root)
    {
        if (root == NULL || root->left == NULL || root->right == NULL)
            return root;

        root->left->next = root->right;
        while (root->next != NULL)
        {
            root->right->next = root->next->left;
        }

        connect(root->left);
        connect(root->right);

        return root;
    }
};

int main()
{
}