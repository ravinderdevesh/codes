#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left, *right;
};
node *create(int data){
	node *NN = new node();
	NN->data = data;
	NN->left = NN->right= NULL;
	return NN;
}
void inorder(node *root){
	if(root== NULL)
		return;
	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
}
node *search(node *root, int data){
	if(root== NULL){
		return NULL;
	}
	if(data = root->data)
		return root;
	if(data < root->data)
		return search(root->left,data);
	if(data > root->data)
		return search(root->right, data);
	
}
node *insertion(node *root,int data){
	node *NN = create(data);
	if(root==NULL)
		return NN ;
	if(data<root->data){
		root->left = insertion(root->left,data);
	}
	if(data>root->data){
		root->right = insertion(root->right,data);
	} 
	return root;
}

node *inorder_predecessor(node *root,int data){
	if(root == NULL)
		return NULL;
	node *r = root->right;
	if(r==NULL)
		return NULL;	
	while(r->left != NULL){
		r = r->left;
	}	
	return r;
}
node *deletion(node *root, int data){
	if(root == NULL	)
		return NULL;
	if(data < root->data)
		deletion(root->left, data);
	else if(data > root->data)
		deletion(root->right,data);
	else{
		if(root->left == NULL){
			node *temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL){
			node *temp = root->left;
			delete root;
			return temp;
		}
		else{
			node *r = root->right;
			while(r->left != NULL){
				r = r->left;
			}
			root->data = r->data;
			free(r);
			return root;
		}
		
	}

}
int main(){
	node *root = NULL;
	root = insertion(root,50);
	root = insertion(root,30);
	root = insertion(root,60);
	root = insertion(root,55);
	int ans = inorder_predecessor(root, 50)->data;
	cout<<ans<<" ";
	root = deletion(root,50);
	inorder(root);
}
