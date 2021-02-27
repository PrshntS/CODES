#include<bits/stdc++.h>
using namespace std;
#define ll long long



int count(int n)
{int count=0;
	count=n/9;
	if(n%9!=0)
	{
		count++;
	}
	return count;

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t; cin>>t;
	while(t--)
	{
		int c,r;
		cin>>c>>r;
		c=count(c);
		r=count(r);
		if(c==r)
		{
			cout<<1<<" "<<r<<endl;
		}
		else if(c<r)
		{
			cout<<0<<" "<<c<<endl;
		}
		else
		{
			cout<<1<<" "<<r<<endl;
		}



	}
	return 0;
}