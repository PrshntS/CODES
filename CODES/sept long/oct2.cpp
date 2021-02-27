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
	while(t--){
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		set<ll> s;
		while(s.find(x)==s.end())
		{
			s.insert(x);
			x=(x+k)%n;
		}
		if(s.count(y))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}