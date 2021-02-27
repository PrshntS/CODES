#include <bits/stdc++.h>
using namespace std;
void solve()
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
        i++;
    }
    bool flag1=false;
    if(i<str.size() and p[i]<p[i+1])
    {
        flag1=true;
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==p[0] and flag1==false)
        {
             str.insert(i,p);
             vect.push_back(str);
             break;
        }
        if(str[i]>p[0])
        {
             str.insert(i,p);
             vect.push_back(str);
             break;
        }
        
    }
    if(vect.size()==0){
    cout<<str+p<<endl;
    return;
    }
    //sort(vect.begin(),vect.end());
    cout<<vect[0]<<endl;
    return;
    
}
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}