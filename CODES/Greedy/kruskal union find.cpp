#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define edge pair<int, int>

class Graph {
   private:
  vector<pair<int, edge> > G;  // graph
  vector<pair<int, edge> > T;  // mst
  int *parent;
  int V;  // number of vertices/nodes in graph
   public:
  Graph(int V);
  void edge(int u, int v, int w);
  int findset(int i);
  void union_set(int u, int v);
  void kruskal();
  void print();
};
Graph::Graph(int V) {
  parent = new int[V];
  for (int i = 0; i < V; i++)
    parent[i] = i;

  G.clear();
  T.clear();
}
void Graph::edge(int u, int v, int w) {
  G.push_back(make_pair(w, edge(u, v)));
}
int Graph::findset(int i) {
  // If i is the parent of itself
  if (i == parent[i])
    return i;
  else
    
    return findset(parent[i]);
}

void Graph::union_set(int u, int v) {
  parent[u] = parent[v];
}
void Graph::kruskal() {
  int i, uRep, vRep;
  sort(G.begin(), G.end());  // increasing weight
  for (i = 0; i < G.size(); i++) {
    uRep = findset(G[i].second.first);
    vRep = findset(G[i].second.second);
    if (uRep != vRep) {
      T.push_back(G[i]);  // add to tree
      union_set(uRep, vRep);
    }
  }
}
void Graph::print() {
  cout << "Edge :"
     << " Weight" << endl;
  for (int i = 0; i < T.size(); i++) {
    cout << T[i].second.first << " - " << T[i].second.second << " : "
       << T[i].first;
    cout << endl;
  }
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
  Graph g(6);
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
  g.kruskal();
  g.print();
  return 0;
}