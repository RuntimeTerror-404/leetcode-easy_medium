#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
};

int main()
{
    Node *root = NULL;
    inOrder(root);
}