#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    auto get_id=[&](int i, int j){
      return i*m+j;
    };
    int f[n*m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m; j++){
            int x; cin>>x;
            f[get_id(i,j)]=x;
        }
    }
    for(int i=0;i<n*m;i++){
        cout<<f[i]<<" ";
    }
    return 0;
}
