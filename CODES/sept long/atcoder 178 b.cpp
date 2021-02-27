#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll ans=INT_MIN;
	if(a*c>ans)
	{
		ans=a*c;
	}
	if(a*d>ans)
	{
		ans=a*d;
	}
	if(b*c>ans)
	{
		ans=b*c;
	}
	if(b*d>ans)
	{
		ans=b*d;
	}
	cout<<ans;


	return 0;
}