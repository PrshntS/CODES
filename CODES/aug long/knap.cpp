#include<bits/stdc++.h>
using namespace std;
#define ll long long

double knap(vector<int> w,vector<int> p,int n,int c)
{
	map<double,int> m;
	for(int i=0;i<n;i++)
	{
		double ratio=(double)p[i]/w[i];
		m.insert(make_pair(ratio,i));

	}
	double profit=0;
	map<double,int>::reverse_iterator i;
	for(i=m.rbegin();i!=m.rend();i++)
	{
	  if(c>0&&c-w[i->second]>=0)
	  {
	  	c-=w[i->second];
	  	profit+=(double)p[i->second];

	  }
	  else
	  {
	     double frac=(double)c/w[i->second];
	     profit+=frac*(double)p[i->second];
	     break;
	  }

	}
	return profit;




}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	vector<int> w,p;
	int n; 
	cin>>n;
	// for entering weights
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		w.push_back(a);
	}
	// for entering profits.
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		w.push_back(a);
	}
	int c;
	cin>>c;
	cout<<knap(w,p,n,c);

	return 0;
}
