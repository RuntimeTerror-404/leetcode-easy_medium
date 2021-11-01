#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
};

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class solution{
	public:
	void TreeToList(TreeNode* root){
		if(root == NULL) return;

		stack<TreeNode*> store;
		store.push(root);

		while(!store.empty()){
			TreeNode current_node = store.pop();
		}
		
	}
	
};

int main(){
    
}
