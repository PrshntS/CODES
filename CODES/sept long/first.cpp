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
		ll n; cin>>n;
		set<ll> s;
		for(ll i=0;i<n;i++)
		{
			ll x; cin>>x;
			s.insert(x);
		}
		cout<<s.size();

		
	}

	return 0;
}