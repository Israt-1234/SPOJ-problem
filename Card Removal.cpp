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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
     int maxi=0; int count =0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1])
            count++;
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        int ans=n-maxi-1;
        cout<<ans<<endl;
    }
    return 0;
}