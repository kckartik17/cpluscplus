#include<bits/stdc++.h>
using namespace std;

void preorder(Node *root){
	if(root == NULL) return;
	cout << root->val;
	preorder(root->left);
	preorder(root->right);
}