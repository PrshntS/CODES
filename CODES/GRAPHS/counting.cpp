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
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll MAX=1000;
	ll count[MAX];
	memset(a,0,MAX);
	for(ll i=0;i<n;i++)
	{
		count[a[i]]++;

	}
	for(ll i=1;i<=MAX;i++)
	{
		count[i]+=count[i-1];
	}
	ll out[n];
	for(ll i=n-1;i>=0;i--)
	{
		out[count[a[i]-1]]=a[i];
	}
	for(ll i=0;i<n;i++)
	{
		cout<<a[i];
	}

	return 0;
}