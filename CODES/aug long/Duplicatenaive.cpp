#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool duplicate(vector<ll> &a,ll range)
{
	unordered_map<ll,ll> m;

	//for traversing vector
	for(ll i=0;i<a.size();i++)
	{
		if(m.find(a[i])!=m.end())
		{


			if(i-m[a[i]]<=range)
				{
					return true;
				}
		}
		m[a[i]]=i;
	}
	return false;
}






int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n; cin>>n;
	vector<ll> a;

	
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a.push_back(x);
	}
	cout<<"Range"<<endl;
	ll k;
	cin>>k;

	if(duplicate(a,k-1))
	{
		cout<<"EXIST"<<endl;
	}
	else
	{
		cout<<"DOES NOT EXIST"<<endl;
	}

	return 0;
}