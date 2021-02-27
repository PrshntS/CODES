#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	ll a[n];
	ll c[100001];
	memset(c,0,sizeof(c));
	set<ll> s;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
		s.insert(a[i]);
		
	}
	for(ll i=0;i<n;i++)
	{
		if(s.find(a[i])!=s.end())
		{
			
			cout<<a[i]<<" : "<<c[a[i]]<<endl;
		}
	    s.erase(a[i]);
	
}

	return 0;
}