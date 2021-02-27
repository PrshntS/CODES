#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll x,k,d;
	cin>>x>>k>>d;
	x=abs(x);
	ll jumps=x/d;
	if(jumps>k)
	{
		cout<<x-(k*d);
	}
	else
	{
		x-=jumps*d;
		k-=jumps;
		if(k%2==0)
		{
			cout<<x;
		}
		else
		{
			cout<<min(abs(x+d),abs(x-d));
			
		}
	}

	return 0;
}