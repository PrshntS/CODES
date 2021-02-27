#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n+1];
    a[1]=2;
    a[2]=3;
    a[3]=1;
    for(ll i=4;i<=n;i++)
    {
        a[i]=i;
    }
    if(i==1)
    {
    	cout<<1<<endl;
    }
    else if(ceil(log2(n))==floor(log2(n)))
    {
        cout<<-1<<endl;
    }
    else
    {
        for(ll i=4;i<=n;i++)
        {
            if(ceil(log2(i))==floor(log2(i)))
            {
                swap(a[i],a[i+1]);
            }
            
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    
    


	
}


	


	
	return 0;
}