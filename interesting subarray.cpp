/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    while(n--){
        ll t;cin>>t;
        ll a[t];
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for(int i=0;i<t;i++){
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
        }
         cout << min({mini*mini, maxi*maxi, mini*maxi}) << " " << max(mini*mini, maxi*maxi) << endl;
    
    }
    return 0;
}