#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fact(ll n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int calc(ll n)
{ll rem=0,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=fact(rem);
		n=n/10;
	}
	return sum;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

set<ll> a;
ll n;
cin>>n;
a.insert(n);
 n=calc(n);
while(a.find(n)==a.end())
{
	a.insert(n);
	n=calc(n);
}
cout<<a.size()*(*a.rbegin());
    



	return 0;
}