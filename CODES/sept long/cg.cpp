#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int Xv,Yv,Xw,Yw,Xv_min,Xv_max,Xw_max,Xw_min,Yv_min,Yv_max,Yw_min,Yw_max;
	cout<<"ENTER THE VALUES OF Xv_min and Xv_max"<<endl;
	cin>>Xv_min>>Xv_max;
	cout<<"ENTER THE VALUES OF Yv_min and Yv_max"<<endl;
	cin>>Yv_min>>Yv_max;
	cout<<"ENTER THE VALUES OF Xw_min and Xw_max"<<endl;
	cin>>Xw_min>>Xw_max;
	cout<<"ENTER THE VALUES OF Yw_min and Yw_max"<<endl;
	cin>>Yw_min>>Yw_max;

	cout<<"ENTER THE VALUES OF Xw and Yw"<<endl;
	cin>>Xw>>Yw;


	cout<<"THE VALUE OF Xv:"<<(Xv_min+((Xw-Xw_min)*((Xv_max-Xv_min)/(Xw_max-Xw_min))))<<endl;
	cout<<"THE VALUE OF Yv:"<<(Yv_min+((Yw-Yw_min)*((Yv_max-Yv_min)/(Yw_max-Yw_min))));	

	return 0;
}