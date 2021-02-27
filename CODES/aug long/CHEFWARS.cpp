#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(void){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		ll h,p;
		cin>>h>>p;
		ll sum=0;
		while(p>0)
		{
			sum+=p;
			p=p/2;
		}
		if(h<=sum)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
		
	}

	
}