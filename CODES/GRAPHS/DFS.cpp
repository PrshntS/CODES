#include<bits/stdc++.h>
using namespace std;
#define ll long long

class graph
{
	int V;
	list<int> *adj;
public:
	graph(int V)
	{
		this->V=V;
		adj=new list<int>[V];
	}
	void add(int u,int v)
	{
		adj[u].push_back(v);
	}
	void DFS(int root);

};
void graph::DFS(int root)
{
	vector<bool> visited(V,false);
	stack<int> stack;
	stack.push(root);
	while(!stack.empty())
	{
		root=stack.top();
		stack.pop();
		if(!visited[root])
		{
			visited[root]=true;
			cout<<root<<" ";
		}

		for(auto i=adj[root].begin();i!=adj[root].end();i++)
		{
			if(!visited[*i])
			{
				stack.push(*i);
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	graph g(5);
	 g.add(1, 0); 
    g.add(0, 2); 
    g.add(2, 1); 
    g.add(0, 3); 
    g.add(1, 4); 
	
	return 0;
}