#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll t;
	cin >> t;
	while(t--){
		ll n,k;
		cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    }
	    ll rem=0,days=0;
	    bool flag=0;
	    for(ll i=0;i<n;i++)
	    {
	    	a[i]+=rem;
	    	
	    	if(a[i]<k)
	    	{flag=1;
	    		break;
	    	}
	    	else
	    	{
	    		days++;
	    	}
	    	rem=a[i]-k;

	    }
	    if(flag==0)
	    {
	    	days=days+(rem+k)/k;
	    	cout<<days<<endl;
	    }
	    else
	    {
	    	cout<<days+1<<endl;

	    }

	}

	return 0;
}