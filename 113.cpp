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
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        vector<vector<int>> paths;
        vector<int> current;
        findPaths(root, sum, current, paths);

        return paths;
    }
    void findPaths(TreeNode *root, int sum, vector<int> &current, vector<vector<int>> paths)
    {
        if (root == NULL)
            return;
        current.push_back(root->val);

        if (root->val == sum && root->left == NULL && root->right == NULL)
        {
            paths.push_back(current);
            return;
        }

        findPaths(root->left, sum - root->val, current, paths);
        findPaths(root->right, sum - root->val, current, paths);
    }
};

int main()
{
}