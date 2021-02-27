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
    while(t--)
    {
        map<char,int> sd,pd;
        vector<char> a;
        vector<string> b;
        string p,s;
        cin>>s>>p;
        for(int i=0;i<p.size();i++)
        {
            pd[p[i]]++;
        }
        for(int i=0;i<s.size();++i){
            if(pd[s[i]]==0)
                a.push_back(s[i]);
            else
                --pd[s[i]];
        }
        for(auto x:a)
        {
            
            b.push_back(string(1,x));
        }
        b.push_back(p);
        sort(b.begin(),b.end());
        for(auto x:b)
        {
            cout<<x;
        }
        cout<<endl;
    }

    return 0;
}