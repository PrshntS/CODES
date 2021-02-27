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
		int n,m,count=0;
		bool flag=0;
		cin>>n>>m;
		if(m%2!=0)
		{
			flag=1;
		}
		for(int i=0;i<n;i++)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(b==c)
			{
				count++;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(count>0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		
		
	}

	return 0;
}