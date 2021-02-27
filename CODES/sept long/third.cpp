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
		vector<ll> v;
		for(ll i=0;i<n;i++)
		{
			ll count=1;
			for(ll j=0;j<n;j++)
			{
				if(i!=j)
				{
					if(j<i)
					{
						if(a[j]>a[i])
						{
							count++;
							for(ll k=j+1;k<n;k++)
							{

								if(a[k]<a[j]&&k!=i)
								{
									count++;
								}
							}
						}
					}
					else if(j>i)
					{
						if(a[j]<a[i])
						{
							count++;
						}
					}
				}
			}
			v.push_back(count);
		}
		
		
		cout<<*min_element(v.begin(),v.end())<<" "<<*max_element(v.begin(),v.end())<<endl;


		
	}

	return 0;
}