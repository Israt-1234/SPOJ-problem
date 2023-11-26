#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int q; cin>>q;
    while(q--){
              int ans=0;
        int l,r,x; cin>>l>>r>>x;
        for(int i=l;i<=r;i++){
            a[i]=a[i]&x;

    }

            for(int i=1;i<=n;i++){
                    //cout<<r;

            ans=ans^a[i];
            }

         cout<<ans<<endl;
    }
    return 0;
}
