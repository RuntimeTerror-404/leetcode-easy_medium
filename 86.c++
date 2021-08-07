#include <bits/stdc++.h>
using namespace std;
// 1->4->3->2->5->2 and x = 3,
// return 1->2->2->4->3->5
struct ListNode
{

    int data;
    ListNode *next;
};

void partition(ListNode head, int x)
{
    ListNode *left = new ListNode();
    ListNode *right = new ListNode();
    ListNode *ltail = left;
    ListNode *rtail = right;

    while (head.next != NULL)
    {
        if (head.data < x)
        {
            ltail.next = *head;
            ltail = ltail.next;
        }
    }
}

int main()
{

    //
}
