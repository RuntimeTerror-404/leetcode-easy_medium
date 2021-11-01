#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

class solution
{
    void reoderList(Node *head)
    {
        Node *curr = head;
        stack<Node *> s;
        while (curr)
        {
            s.push(curr);
            curr = curr->next;
        }

        while (curr)
        {
            Node *next = curr->next;
            curr->next = s.top();
            s.pop();
            curr = curr->next;
            curr->next = next;
            curr = curr->next;
        }
        curr->next = NULL;
    }
};

int main()
{
}