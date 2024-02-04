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
    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
       ll a[2*n];
       for(int i=0;i<2*n;i++)
       cin>>a[i];
       sort(a,a+2*n);
       int count=0;
       bool ok=true;
       for(int i=0;i<2*n-1;i++){
        if(a[i]==a[i+1]){
        count++;
        if(count>=2){
            ok=false;
            break;
        }
       }
       else
       count=0;
    }
    if(ok)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    }
    return 0;
}