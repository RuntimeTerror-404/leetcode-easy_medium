#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x):data(x), next(nullptr){}
};

class solution{
    bool hasCycle(Node* head){
        Node* fast = head;
        Node* slow = head;

        while(slow != nullptr || fast != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};


int main(){


}