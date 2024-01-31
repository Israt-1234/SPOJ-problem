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
        int n,b;
        cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]>=b){
                int x=a[i]/b;
                int l=a[i]-b*x;
                mini=min(mini,l);
            }
        }
        if(mini==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<mini<<endl;
    }
    return 0;
}