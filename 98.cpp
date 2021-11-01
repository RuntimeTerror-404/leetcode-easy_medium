#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *rigth;
};

class solution
{
    bool isValid(Node *root)
    {
        return valid(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }
    bool valid(Node *node, long start, long end)
    {
        if (node == 0)
            return true;

        if (start < node->data && node->data < end)
        {
            return valid(node->left, start, node->data) && valid(node->rigth, node->data, end);
        }

        return false;
    }
};

int main()
{
}