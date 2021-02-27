#include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int bin(int n,int r)
{
	if(r==n||r==0)
	{
		return 1;
	}
	else
	{
	  return bin(n-1,r-1)+bin(n-1,r);	
	}
}
int main(void)
{
	int n,r;
	cin>>n>>r;
	cout<<bin(n,r);
}
