#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class solution
{
public:
    bool hasPathSum(TreeNode *root, int sum)
    {
        if (root == NULL)
            return false;
        else if (root->left == NULL || root->right == NULL || sum - root->val == 0)
            return true;
        else
        {
            return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
        }
    }
};

int main()
{
}