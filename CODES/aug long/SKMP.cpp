#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--)
	{
		map<char,int> sd,pd;
		vector<char> a;
		string p,s;
		cin>>s>>p;
		for(int i=0;i<s.size();i++)
		{
			sd[s[i]]++;

		}
		for(int i=0;i<p.size();i++)
		{
			pd[p[i]]++;
		}
		for(auto i=pd.begin();i!=pd.end();i++)
		{
			sd[i->first]=sd[i->first]-(i->second);
			
		}
		for(auto i=sd.begin();i!=sd.end();i++)
		{
			while((i->second)--)
			{
				a.push_back(i->first);
			}
			
		}

		vector<string> b;
		for(auto x:a)
		{
			string q(1,x);
			b.push_back(q);
		}
		b.push_back(p);
		sort(b.begin(),b.end());
		for(auto x:b)
		{
			cout<<x;
		}
		cout<<endl;

	}

	return 0;
}