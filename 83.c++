#include <bits/stdc++.h>
using namespace std;
// 1->2->2 => 1->2

struct Node
{
    int data;
    Node *next;
};

void removeDuplicates(Node *head)

{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next == temp->next->next)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
}

void push(Node **head_ref, int new_data)
{

    /* allocate node */
    Node *new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off
    the new node */
    new_node->next = (*head_ref);

    /* move the head to point
    to the new node */
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;

    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    printList(head);
    cout << endl;

    cout << "after removing duplicates" << endl;

    removeDuplicates(head);
}
