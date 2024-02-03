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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
         int sum=k;
        for(int i=0;i<n;i++){
            if(sum>=a[i]){
                sum-=a[i];
                cout<<1;
            }
            else
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}