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
        int sum=0;
        int n;cin>>n;
        int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        
        sum+=(ceil)((double) a[i]/2);
        
        
       }
        cout<<sum<<endl;
     }
    
    return 0;
}
