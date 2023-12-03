#include<bits/stdc++.h>
using namespace std;
#define ll long long

void divisor(int x){
    set<int>s;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            int k=i;
           int l=x/i;
            
            s.insert(k);
            s.insert(l);
        }
    }
    int sum=0;
    for(auto n:s)
    sum+=n;
    cout<<sum-x<<'\n';
    s.clear();
    
}
int main()
{

    int n; cin>>n;
    while(n--){
    int x;cin>>x;
        divisor(x);
        // vector<ll>v;
        // for(auto x:s){
        //    // cout<<x;
        // }
        // v.assign(s.begin(),s.end());
        // cout<<v.size()<<'\n';
        // s.clear();
    }
    return 0;
}