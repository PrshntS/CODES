#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string N;
	cin>>N;
	ll ans=0;
	for(ll i=0;i<N.size();i++)
	{
		ans+=(N[i]-'0');
	}
	if(ans%9==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}