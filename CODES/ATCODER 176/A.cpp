#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	float n,x,t;
	cin>>n>>x>>t;
	float a=n/x;
	
	ll ans=(ll)(ceil(a)*t);
	cout<<ans;



	return 0;
}