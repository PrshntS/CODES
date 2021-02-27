#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	const unsigned int M = 1000000007;
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	ll s=0;
	for(ll i=0;i<n;i++)
	{
		s=(s%M+a[i]%M)%M;
	}
	ll ss=0;
	 ss=(s%M*s%M)%M;
	cout<<ss<<endl;
	ll iss=0;
	for(ll i=0;i<n;i++)
	{
		iss=(iss%M+(a[i]%M*a[i]%M)%M)%M;
	}
	cout<<iss<<endl;






	return 0;
}