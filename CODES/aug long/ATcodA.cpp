#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int cnt=0;
	string A;
	cin>>A;
	for(int i=0;i<A.size();i++)
	{
		if(A[i]=='R')
			cntR++;
	}
	if(cnt==3)
	{
		cout<<3;
	}
	else if(cnt==2)
	{
		if(A[1]=='S')
		{
			cout<<1;
		}
		else
		{
			cout<<2;
		}
	}
	else if(cnt==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}


	return 0;
}