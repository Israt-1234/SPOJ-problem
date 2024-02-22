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
        bool ok=false;
        int count =0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((a[i]+a[j])==(a[i]*a[j])){
                
                count++;
               
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}