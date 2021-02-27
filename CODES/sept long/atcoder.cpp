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
	while(x<y)
	{
		if(x*a<=x+b)
		{
			x*=a;
			if(x>y) break;
			exp++;

		}	
		else
		{
			x+=b;
			if(x>y) break;
			
			exp++;
		}
	}

	
	cout<<exp;

	return 0;
}