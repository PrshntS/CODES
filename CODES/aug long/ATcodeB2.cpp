#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	vector<ll> a;
	ll n,cnt=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		ll x; cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			for(ll k=j+1;k<n;k++)
			{
				if(a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k] && a[i]+a[j]>a[k])
				{
					cnt++;

				}
			}
		}
	}
	cout<<cnt;

	return 0;
}