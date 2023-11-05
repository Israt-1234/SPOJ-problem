#include<bits/stdc++.h>
using namespace std;
const long long  N=1e9+7;
int solve(long long x,long long y, long long p)
{
    int res =1; x=x%p;
    if(x==0) return 0;
    while(y>0){
            if(y&1)
        res =(res*x)%p;
        y=y/2;
        x=(x*x)%p;
    }
   return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
    long long n,a; cin>>a>>n;
     if(a<0) cout<<1<<endl;
     else {
        cout<<solve(a,n/2, N)<<endl;
     }
    }
}
