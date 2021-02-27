#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
	int d;
	Node* left=NULL;
	Node* right=NULL;
};
Node* newNode(int x)
{
	Node* temp=new Node;
	temp->d=x;
	temp->left=NULL;
	temp->right=NULL;

	return temp;
}
void in(Node* root)
{
	if(!root)
	{
		return;
	}

	in(root->left);
	cout<<root->d;
	in(root->right);
}
void revin(Node* root)
{
	if(!root)
	{
		return;
	}

	revin(root->right);
	cout<<root->d;
	revin(root->left);
}
Node* lca(Node* root,int x,int y)
{
	if(!root)
	{
		return NULL;
	}
	if(root->d>x&&root->d>y)
	{
		return lca(root->left,x,y);
	}
	else if(root->d<x&&root->d<y)
	{
		return lca(root->right,x,y);
	}
	return root;
}




int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Node* root = newNode(5); 
    root->left = newNode(2); 
    root->right = newNode(6); 
    root->left->left = newNode(1); 
    root->left->right = newNode(4); 
    root->left->right->left = newNode(3); 
    root->right->right = newNode(8); 
    root->right->right->right = newNode(9); 
    root->right->right->left = newNode(7); 

 	in(root);
 	cout<<endl;
 	revin(root);
 	cout<<endl<<lca(root,3,6)->d;

	return 0;
}