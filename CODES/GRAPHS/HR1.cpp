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
	ll max=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	ll count[max+1];
	memset(count,0,max+1);
	for(ll i=0;i<n;i++)
	{
		count[a[i]]++;

	}
	for(ll i=1;i<=max;i++)
	{
		count[i]+=count[i-1];
	}
	ll out[n];
	for(ll i=n-1;i>=0;i--)
	{
		out[count[a[i]-1]]=a[i];
		count[a[i]]--;
	}
	for(ll i=0;i<n;i++)
	{
		cout<<out[i];
	}

	return 0;
}