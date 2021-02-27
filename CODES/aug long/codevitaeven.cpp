#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	 ll l,h,k;
	cin>>l>>h;
	cin>>k;
	vector<ll> v,even,odd;
	for(ll i=l;i<=h;i++)
	{
		v.push_back(i);
	}
	for(ll i=0;i<v.size();i++)
	{
		if(v[i]%2==0)
		{
			even.push_back(v[i]);
		}
		else{
			odd.push_back(v[i]);
		}
	}
	ll e,o;
	e=even.size();
	o=odd.size();
	ll res=0.5*((pow((e+o),k)+pow((e-o),k)));
	cout<<res;



	return 0;
}