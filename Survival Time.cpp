#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,x,d; cin>>n>>x>>d;
        int X=x*5;
        int N= n/X;
        cout<<N+d<<endl;
    }
    return 0;
}
