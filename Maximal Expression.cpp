#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;

    while(t--){
            ll m=0;
            ll maxi = INT_MIN;
        ll n,k; cin>>n>>k;
//        for(int i=0;i*i<n;i++){
//                 ll l=(i%k)*((n-i)%k);
//  //  cout<<"l"<<l<<endl;
//         if(maxi<l){
//        m=i;
//         }
//        maxi=max(maxi, l);
//        }
//        cout<<m<<endl;
int x= (k-1)+((n-(k-1))%k);
cout<<x/2<<endl;
    }
    return 0;
}

