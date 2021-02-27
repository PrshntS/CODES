#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		
		for(ll i=0;i<n;i++)
		{ bool flag=0;
			for(ll j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					flag=1;
					cout<<a[j];
					break;
				}
			}
			if(flag==0)
			{
				cout<<-1;
			}
		}
		
	}

	return 0;
}