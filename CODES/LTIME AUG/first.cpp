#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	
	set<int> s;
	cin >> t;
	while(t--){
		map<int,int> m;
	map<int,int> m2;

		ll n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			ll a;
		    cin>>a;
		    m[a]++;

		}
		for(auto i=m.begin();i!=m.end();i++)
		{
			m2[i->second]++;
		}
		ll max=INT_MIN,ans=0;
		for(auto i=m2.begin();i!=m2.end();i++)
		{
			
			if(i->second>max)
			{
				max=i->second;
				ans=i->first;
			}
			
		}
		cout<<ans<<endl;
		

		
	}

	return 0;
}