#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	forward_list<ll> a;
	a.assign({1,2,3});
	for( ll&x:a)
	{
		cout<<x;
	}







	return 0;
}