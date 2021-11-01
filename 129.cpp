#include <bits/stdc++.h>
using namespace std;
/*
    1
    /\
    2 3

*/

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

class solution
{
    int nodeSum(TreeNode *root)
    {
        if (root == NULL)
            return;
        int ans;
        int value = root->data;
        if (root->left && root->right)
        {
            int sum1 = value * 10 + root->left->data;
            int sum2 = value * 10 + root->right->data;
            ans = sum1 + sum2;
        }

        return ans;
    }
};

int main()
{
}