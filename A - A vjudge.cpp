#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int count=0;
        if((x!=a && y!=b)&& (x!=b && y!=a)) cout<<2<<endl;
       else if((x==b && y==a)|| (x==a && y==b)) cout<<0<<endl;
       else
        cout<<1<<endl;
    }
    return 0;
}
