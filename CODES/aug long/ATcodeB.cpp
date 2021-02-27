#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int c=0;
	int n; cin>>n;
	vector<ll> a;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{

		for(int j=i+1;j<=n;j++)
		{
			
				for(int k=j+1;k<=n;k++)
				{		
					
					if((a[i]!=a[j])&&(a[j]!=a[k])&&(a[i]!=a[k]))
						{
							if((a[k]<a[i]+a[j])&&(a[j]<a[i]+a[k])&&(a[i]<a[k]+a[j]))
							{
								c++;
					
							}
						
				}
	
			
		}
	}
}
	cout<<c;

	return 0;
}