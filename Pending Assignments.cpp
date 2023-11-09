#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
    int x,y,z; cin>>x>>y>>z;
       int n= x*y;
       int time = 1440*z;

       if(n<=time) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
