#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Node 
{ 
public:
    int data ; 
   Node* left ; 
    Node* right ; 
}; 
Node* newNode(int x)
{
	Node* p=new Node();
	p->data=x;
	p->left=NULL;
	p->right=NULL;

	return p;
}
int width(Node* p)
{
	if(!p)
	{
		return 0;
	}
	queue<Node* >q;
    int result=0,width=0;
    q.push(p);
    while(!q.empty())
    {
    	int count=q.size();
    	result=max(count,result);
    	while(count--)
    	{
    		Node* a=q.front();
    		q.pop();
    		if(a->left)
    		{
    			q.push(a->left);
    		}
    		if(a->right)
    		{
    			q.push(a->right);
    		}
    	}
    }
    return result;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	struct Node *root = newNode(1); 
    root->left        = newNode(3); 
    root->right       = newNode(2); 
    root->left->left  = newNode(5); 
    root->left->right = newNode(3); 
    root->right->right = newNode(9);  
    cout<<width(root);
  
	
	

	return 0;
}