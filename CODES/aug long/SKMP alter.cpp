#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;
    cin >> t;
    while(t--)
    {
        string s,p;
    cin>>s>>p;
    map<char,int>map;
    for(char ch:s)
    {
        map[ch]++;
    }
    for(char ch:p)
    {
        map[ch]--;
    }
    string str="";
    vector<string>vect;
    for(char ch='a';ch<='z';ch++)
    {
       
            int count=map[ch];
            int j=0;
            while(j<count)
            {
                str=str+ch;
                j++;
            }

    }
    int i=0;
    while(i<p.size()-1 and p[i]==p[i+1])
    {
        cout<<"Y";
        i++;
    }


}
}