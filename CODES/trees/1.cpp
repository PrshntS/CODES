#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> a;
class Node
{
public:
	int x;
	Node* left;
	Node* right;
    Node(int d)
    {
    	x=d;
    	left=right=NULL;

    }
};
void preorder(Node* temp)
{
	if(temp==NULL)
	{
		return ;
	}
	cout<<temp->x<<" ";
	preorder(temp->left);
	preorder(temp->right);

}
void postorder(Node* temp)
{
	if(!temp)
	{
		return;
	}
	postorder(temp->left);
	postorder(temp->right);
	cout<<temp->x<<" ";
}
void inorder(Node* temp)
{
	if(!temp)
	{
		return;
	}
	inorder(temp->left);
	a.push_back(temp->x);
	//cout<<temp->x<<" ";
	inorder(temp->right);
}

void insert(Node* temp,int d)
{
	queue<Node*> q;
	q.push(temp);
	while(!q.empty())
	{
		Node* temp=q.front();
		q.pop();
		if(!temp->left)
		{
			temp->left=new Node(d); 
			break;
		}
		else
		{
			q.push(temp->left);
		}
		if(!temp->right)
		{
			temp->right=new Node(d);
			break;
		}
		else
		{
			q.push(temp->right);
		}

	}
}



int main() 
{ 
    Node* root = new Node(10); 
    root->left = new Node(11); 
    root->left->left = new Node(7); 
    root->right = new Node(9); 
    root->right->left = new Node(15); 
    root->right->right = new Node(8); 
  
    cout << "Inorder traversal before insertion:"; 
    inorder(root); 
  
   /* int key = 12; 
    insert(root, key); */
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    /*inorder(root); 
    cout<<endl;*/
    //cout<<"PRE ORDER TRAVERSAL: ";
 //  preorder(root);
  //cout<<endl;
  //cout<<"POST ORDER TRAVERSAL: ";
  //postorder(root);
    int x;
    return 0; 

}