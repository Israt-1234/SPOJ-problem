#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int x,y,z; cin>>x>>y>>z;
        int sum = (x+y+z)/3;
        if(sum>30) cout<<"PASS"<<endl;
        else   cout<<"FAIL"<<endl;
    }
    return 0;
}
