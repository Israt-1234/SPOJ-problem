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
    ll n; cin>>n;
    while(n--){
       ll t; cin>>t;
        ll x;
        ll ev=0,od=0;
        for(int i=0; i<t; i++){
            cin>>x;
            if(x%2==0)
            ev++;
            else
            od++;
        }
        if(t==1)
        cout<<0<<endl;
        else
        cout<<od/2<<endl;
    }
    return 0;
}