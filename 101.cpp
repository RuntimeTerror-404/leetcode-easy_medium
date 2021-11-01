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
    bool isSymmetric(Node *root)
    {
        if (!root)
            return true;

        return areMirror(root->left, root->right);
    }

    bool areMirror(Node *t1, Node *t2)
    {
        if (!t1 || !t2)
            return false;

        if (t1->data != t2->data)
            return false;

        return (areMirror(t1->left, t2->right) && areMirror(t1->right, t2->left));
    }
};

int main()
{
}