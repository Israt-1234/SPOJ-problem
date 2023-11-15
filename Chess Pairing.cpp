#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t; cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n-x>=0) cout<<0<<endl;
        else cout<<abs((x-n)*2)<<endl;

    }
    return 0;
}

