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
    bool sameTree(Node *head1, Node *head2)
    {

        if (!head1 && !head2)
            return true;

        if (!head1 || !head2)
            return false;

        if (head1->data != head2->data)
            return false;

        return sameTree(head1->left, head2->left) && sameTree(head1->right, head2->right);
    }
};

int main()
{
}