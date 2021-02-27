#include<bits/stdc++.h>
using namespace std;
#define ll long long


void push(stack<ll> &main,stack<ll> &aux,ll x)
{
	if(main.empty())
	{//cout<<"EMPTY WORKING";
		main.push(x);
	    aux.push(x);
	}
	else
	{
		main.push(x);
		//cout<<"PUSH WORKING";

		if(x<aux.top())
		{
			aux.push(x);
		}
		/*else
		{
			aux.push(aux.top());
		}
		*/
	}
}
ll get_min(stack<ll> aux)
{
	return aux.top();
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	stack<ll> main,aux;
	ll n; cin>>n;
	for(ll i=0;i<n;i++)
	{ll x; cin>>x;
		push(main,aux,x);

	}

	cout<<get_min(aux);





	return 0;
}