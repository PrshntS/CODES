#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll x,y,a,b,exp=0;;
	cin>>x>>y>>a>>b;
	
	while(x<y && x*a<x+b && a<y/x)
	{
		x*=a;
		exp++;

	}

	exp+=(y-x-1)/b;
	

	
	cout<<exp;

	return 0;
}