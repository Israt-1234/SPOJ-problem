#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        double k=(double)n/100;
       int cei=ceil(k);
        if(cei<x)
        cout<<0<<endl;
        else
        cout<<abs(x-cei)<<endl;
    }
    return 0;
}