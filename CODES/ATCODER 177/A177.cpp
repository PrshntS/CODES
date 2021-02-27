#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	float  D,T,S;
	cin>>D>>T>>S;
	if(D/S<=T)
	{
		cout<<"Yes";

	}
	else
	{
		cout<<"No";
	}

	return 0;
}