#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
	int d;
	Node* left;
	Node* right;
};

Node* newnde(int x)
{
	Node* p=new Node;
	p->d=x;
	p->left=NULL;
	p->right=NULL;

	return p;
}

void inorder(Node* temp)
{
	if(!temp)
	{
		return;
	}
	inorder(temp->left);
	cout<<temp->d<<" ";
	inorder(temp->right);
}

Node* insert(Node* temp,int x)
{
	if(!temp) return newnde(x);

	if(x<temp->d)
	{
		temp->left=insert(temp->left,x);

	}
	else if(x>temp->d)
	{
		temp->right=insert(temp->right,x);
	}
	return temp;
}
Node* search(Node* p,int k)
{
	if(p==NULL||p->d==k)
	{
		return p;
	}
	if(k<p->d)
	{

		return search(p->left,k);
	}
	else if(k>p->d)
	{
		return search(p->right,k);
	}

}


int main(){
	Node* head=NULL;
	head=insert(head,10);
	insert(head, 30); 
    insert(head, 20); 
    insert(head, 40); 
    insert(head, 70); 
    insert(head, 60); 
    insert(head, 80); 
    inorder(head);
	Node* a=search(head,35);
	if(!a)
	{
		cout<<"NOT FOUND";
	}
	else
	{
		cout<<"FOUND";
	}


	return 0;
	
	
}