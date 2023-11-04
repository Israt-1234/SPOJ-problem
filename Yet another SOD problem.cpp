#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumof(ll n)
{
   ll sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int  t; cin>>t;
    while(t--){
      ll l,r; cin>>l>>r;
       ll count =0;
//    for(ll i=l;i<=r;i++){
//        if(sumof(i)%3==0){
//            count= (r/3)-((i-1)/3);
//            break;
//        }
//
//    }
          count= (r/3)-((l-1)/3);
    cout<<count<<endl;
    }
    return 0;
}
