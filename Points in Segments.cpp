#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,q;
int l,r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t; cin>>t;
    for(int j=1;j<=t;j++){
       cin>>n>>q;
       int a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];

        cout<<"Case "<<j<<":"<<endl;
       while(q--){
        cin>>l>>r;
    int up=upper_bound(a, a+n, r)-a;
    int lw = lower_bound(a, a+n , l)-a;

    cout<<up-lw<<'\n';

       }
    }
    return 0;
}
