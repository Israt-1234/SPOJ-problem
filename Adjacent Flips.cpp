#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string s; cin>>s;
        stack<char>st;
        for(auto x:s){
            if(!st.empty() && st.top()==x){
                st.pop();
          }
          else   st.push(x);
        }
        if(st.size()<=1)  yes ;
        else             No ;
    }
    return 0;
}
