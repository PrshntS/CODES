#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	string A;
	cin>>A;
	int count=0;
	for(int i=0;i<2;i++)
	{
		if(A[i]==A[i+1] && A[i]=='R')
		{
			count++;

		}
	}
	cout<<count;

	return 0;
}