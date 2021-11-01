#include <bits/stdc++.h>
using namespace std;
// 1->2->3->4->5->NULL ===> 1->4->3->2->5->NULL

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data, ListNode* next);
};

class solution{
public:
    ListNode* reverseBetween(ListNode* head, int start, int end){
        if(!head || start == end) return head;
        ListNode dummy(0);
        dummy.next = head;
    }
}