#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t;
   while(t--){
    long long n;cin>>n;
    int count=0;
    if(n==1) cout<<0<<endl;
    else{
    while(n>1){
    n=n/2;
    count++;
   }
   cout<<count<<endl;
   }
}
return 0;
}
