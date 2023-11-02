#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,q;cin>>n>>q;
        map<string, int>v;
        for(int i=0;i<n;i++){
            string s; int x;
            cin>>s>>x;
            v[s]=x;
        }
     while(q--){
        string st;
        int sum=0;
       while(cin>>st){
        if(st==".") break;
            sum=sum+v[st];
       }
         cout<<sum<<'\n';
     }
     return 0;
}
