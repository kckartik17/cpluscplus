#include<bits/stdc++.h>
using namespace std;

void inorder(Node *root){
	if(root == NULL) return;
	inorder(root->left);
	cout << root->val;
	inorder(root->right);
}

int main(){
	
	return 0;
}