#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r; cin>>r;
    while(r--){
        int n,k,s;cin>>n>>k>>s;
        cout<<(s-(n*n))/(k-1)<<endl;
    }
    return 0;
}
