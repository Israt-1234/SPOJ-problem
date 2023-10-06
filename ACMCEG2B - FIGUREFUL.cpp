#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    map<pair<int , int>, string>v;
    for(int i=0;i<n;i++){
        int x,y; string s;
        cin>>x>>y>>s;
        pair<int, int>p=make_pair(x,y);
        v[p]=s;
    }
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        pair<int ,int>p=make_pair(x,y);
        cout<<v[p]<<'\n';
    }
}
