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
    while(n--){
        int t,k; cin>>t>>k;
        int a[t];
        int maxi=0;
        for(int i=0;i<t;i++){
            cin>>a[i];
            maxi=max(a[i],maxi);
        }
        cout<<max(maxi,k)<<endl;
    }
    return 0;
}
