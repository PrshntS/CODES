#include<bits/stdc++.h>

#define ll long long int
#define llu unsigned long long int
#define f(n) for(ll i=0;i<n;i++)
#define fr(n) for(ll i=n-1;i>=0;i--)
#define endl "\n"
#define mod 1000000007

using namespace std;

int main()
{
	//#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//#endif
	std::ios_base::sync_with_stdio(false);

	ll n;
	cin>>n;
	ll a[n+1];
	f(n){
		cin>>a[i];
	}
	ll count=1;
	ll ans=1;
	for(ll i=0;i<n-1;i++){
		ll temp=0;
		ll temp2=0;
		ll type=0;
		if(count==1){
			if(a[i]>0){
			type=1;
		}
		else{
			type=-1;
		}
		}
		if(a[i]>0){
			temp=1;
		}
		else{
			temp=-1;
		}
		if(a[i+1]>0){
			temp2=1;
		}
		else{
			temp2=-1;
		}
		if(temp+temp2==0 || temp+temp2==type){
			count++;
			ans=max(count,ans);
		}
		else{
			count=1;
		}

	}
	cout<<ans;
	
	return 0;
}