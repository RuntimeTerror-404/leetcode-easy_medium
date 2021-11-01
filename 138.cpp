#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
};

class solution
{
    Node *copyList(Node *root)
    {
        unordered_map<Node *, Node *> oldToCopy;

        Node *curr = root;

        while (curr != nullptr)
        {
            Node *newNode = new Node(curr->data);
            oldToCopy[curr] = newNode;
            curr = curr->next;
        }

        Node *temp = root;
        while (temp != nullptr)
        {
            oldToCopy[temp]->next = oldToCopy[temp->next];
            oldToCopy[temp]->random = oldToCopy[temp->random];
        }

        return oldToCopy[root];
    }
};

int main()
{
}