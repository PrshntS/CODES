#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int> a;
    for(int i=0;i<operations.size();i++)
    {
        istringstream iss(operations[i]);
        int  x,lim,value;
       
        string token;
        vector<string> op;
        while(getline(iss,token,' '));
        op.push_back(token);
        if(op[0]=="push")
        {
            cout<<1;
            x=stoi(op[1]);
            a.push_back(x);
            cout<<a[a.size()-1]<<endl;
        }
        else if(op[0]=="inc")
        {
            lim=stoi(op[1]);
            value=stoi(op[2]);
            
            for(int i=0;i<lim;i++)
            {
                a[i]+=value;
            }
            cout<<a[a.size()-1]<<endl;
        }
        else {
            if(a.size()>0)
            {
                a.pop_back();
            }
            
            if(a.size()==0)
            {
                cout<<"EMPTY"<<endl;
                
            }
            else
            {
                cout<<a[a.size()-1]<<endl;
            }
        }

	return 0;
}