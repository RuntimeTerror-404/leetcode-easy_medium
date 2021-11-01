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
public:
    Node *arrayToBinaryTree(vector<int> &nums)
    {
        return helper(0, nums.size() - 1, nums);
    }
    Node *helper(int l, int r, vector<int> &nums)
    {
        if (l > r)
            return NULL;
        int m = (l + r) / 2;
        Node *root;
        root->data = nums[m];
        root->left = helper(l, m - 1, nums);
        root->right = helper(m + 1, r, nums);
        return root;
    }
};

int main()
{
}