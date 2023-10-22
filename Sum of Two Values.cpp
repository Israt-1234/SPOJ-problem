#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x; cin>>n>>x;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        if(mp.find(x-a[i])!=mp.end()){
            cout<<mp[x-a[i]]<< " "<<i<<endl;
            return 0;
        }
        mp[a[i]]=i;
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}
