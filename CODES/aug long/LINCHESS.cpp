#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--)
	{
	map<int,int> m;

		bool flag=0;
		ll n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			if(k%p==0)
			{
				m.insert({k/p,p});
				flag=1;

			}
		}
		if(flag==0)
		{
			cout<<-1<<endl;
		}
		else
		{auto i=m.begin();
			cout<<i->second<<endl;
		}
		
		
	}

	return 0;
}