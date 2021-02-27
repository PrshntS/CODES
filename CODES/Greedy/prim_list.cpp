#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int> ps;
class graph
{
	int V;
	list <pair<int,int>> *adj;
public:
	graph(int V);
	void edge(int w,int u,int v);
	void prim();
};

graph::graph(int V)
{
	this->V=V;
	adj=new list<ps>[V];
}
void graph::edge(int w,int u,int v)
{
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}

void graph::prim()
{
	
    priority_queue< ps, vector <ps> , greater<ps> > p;

	vector<int> key(V,INT_MAX);
	
	vector<bool> set(V,false);
	
	vector<int> mst(V,-1);
	
	int root=0;
	key[root]=0;
	
	p.push(make_pair(root,0));
	
	while(!p.empty())
	{
		int u=p.top().second;
		p.pop();
		set[u]=true;


		for(auto i=adj[u].begin();i!=adj[u].end();i++)
		{
			int vertex=(*i).first;
			int weight=(*i).second;

			if(set[vertex]==false && key[vertex]>weight)
			{
				key[vertex]=weight;
				p.push(make_pair(key[vertex],vertex));
				mst[vertex]=u;
			}
		}
	}
	for(int i=1;i<V;i++)
	{
		cout<<mst[i]<<" "<<i<<endl;
	}




}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	
	
	graph g(6);
  
  g.edge(0, 1, 4);
  g.edge(0, 2, 4);
  g.edge(1, 2, 2);
  g.edge(1, 0, 4);
  g.edge(2, 0, 4);
  g.edge(2, 1, 2);
  g.edge(2, 3, 3);
  g.edge(2, 5, 2);
  g.edge(2, 4, 4);
  g.edge(3, 2, 3);
  g.edge(3, 4, 3);
  g.edge(4, 2, 4);
  g.edge(4, 3, 3);
  g.edge(5, 2, 2);
  g.edge(5, 4, 3);
   g.prim(); 
cout<<endl;


  
	return 0;
}