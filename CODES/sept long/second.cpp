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
		ll n;
		cin>>n;
		
		ll a[n][n];
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		ll count=0;
		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j];
			}
		}
		*/
		
		
		ll b[n-1];
		for(ll i=1;i<n;i++)
		{
			if(a[0][i]!=(i+1))
			{
				b[i]=0;
			}
			else
			{
				b[i]=1;
			}
		}
		
		
		for(ll i=n-1;i>=1;i--)
		{
			if(b[i]==0)
			{
				for(ll j=i;j>=1;j--)
				{
					if(b[j]==0)
					{
						b[j]=1;
					}
					else
					{
						b[j]=0;
					}
				}
			
				
				count++;
			}
		}
		cout<<count<<endl;
		
		
		
	
		

		
			
		
		
	}

	return 0;
}