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
Node* newNode(int x)
{
	Node* temp =new Node();
	temp->d=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp; 
}


int oddeven(Node* p)
{
	if(!p)
	{
		return 0;
	}
	queue<Node *>q;
	q.push(p);
	int level=0;
	int even=0,odd=0;
	while(!q.empty())
	{
		level++;
		int size=q.size();
		while(size--)
		{
			Node* a=q.front();
			q.pop();
			if(level%2==0)
			{
				even+=a->d;
			}
			else
			{
				odd+=a->d;
			}
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
	return abs(odd-even);

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
Node* lca(Node* p,int x,int y)
{
	if(!p)
	{
		return p;
	}
	if(p->d==x||p->d==y)
	{
		return p;
	}
	Node* llca=lca(p->left,x,y);
	Node* rlca=lca(p->right,x,y);

	if(llca&&rlca)
	{
		return p;
	}

	if(llca!=NULL)
		return llca;
	else
		return rlca;

}
 vector<ll> v;
void inorder(Node* root)
{
	
	if(!root)
	{
		return ;
	}

	inorder(root->left);
	v.push_back(root->d);
	inorder(root->right);
}
bool isbst(Node* root)
{
	vector<ll> b;
	b=v;
	sort(v.begin(),v.end());
	if(v==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void ini(Node* root)
{
	if(!root)
	{
		return;
	}

	ini(root->left);
	cout<<root->d;
	ini(root->right);
}
int height(Node* root)
{
	if(!root)
	{
		return 0;
	}
	int l=height(root->left);
	int r=height(root->right);
	return max(l,r)+1;
}
int in_succes(Node* root,Node* node)
{
	if(node->right)
	{
		Node* temp=node->right;
		while(temp->left!=NULL)
		{
			temp=temp->left;
		}
		return temp->d;
	}
	Node* temp=NULL;
     while(root!=NULL)
	{
		if(node->d<root->d)
		{
			temp=root;
			root=root->left;
		}
		else if(node->d>root->d)
		{
			temp=root;
			root=root->right;
		}
		else
		{
			break;
		}
		return temp->d;
	}


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
    Node* succ=root->right->right;
    /*cout<<oddeven(root)<<endl;
    cout<<width(root)<<endl;
    cout<<lca(root,3,7)->d<<endl;*/
    cout<<height(root)<<endl;
    cout<<"SUCCESSOR OF "<<succ->d<<": "<<in_succes(root,succ);
	/*ini(root);
    if(isbst(root))
    {
    	cout<<"BST";
    }
    else
    {
    	cout<<"NOT A BST";
    }*/

  
	return 0;
}