#include<bits/stdc++.h>
using namespace std;
#define ll long long
int min(int key[],bool set[],int n)
{
	int min=INT_MAX, minv;

	for(int i=0;i<n;i++)
	{
		if(key[i]<min && set[i]==false)
		{
			min=key[i];
			minv=i;
		}
	}
	return minv; // retrieving index of minimum "UNVISITED" vertex hence false
}
void printMST(int mst[], int graph[5][5],int n) 
	{ 
	    cout<<"Edge \tWeight\n"; 
	    for (int i = 1; i < n; i++) 
	        cout<<mst[i]<<" - "<<i<<" \t"<<graph[i][mst[i]]<<" \n"; // edges b/w current vertex i.e to vertex added
	} 

void primMST(int graph[5][5],int n)
{
	int mst[n];
	int key[n];
	bool set[n];
	for(int i=0;i<n;i++)// initializing all vertices to unadded and setting infinite costs
	{
		set[i]=false;
		key[i]=INT_MAX;
	}

    //including fisrt vertex into the mst beforehand i.e root
	key[0]=0;
	for(int i=0;i<n-1;i++)
	{
		int u=min(key,set,n);

		set[u]=true; //indicating inclusion in the mst;

		for(int i=0;i<n;i++)
		{
			if(graph[u][i] && set[i]==false && graph[u][i]<key[i])// updating the value of adjacent vertex with edge if edge wight is lower than the vertex.
			{
				mst[i]=u;// including in mst
				key[i]=graph[u][i]; //updating the values of vertex.
			}
		}

	}
	printMST(mst,graph,n);
	

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n=5;
	int graph[5][5]={	{ 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 }
                };

                primMST(graph,n);

	return 0;
}