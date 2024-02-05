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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int store=0;
        bool ok=true;
        int temp=0;
        int sum1=0;
        for(int i=0;i<n;i++){
            if(a[0]<k){
              ok=false;
              temp=i+1;
              break;
            }
            else{
                
                sum1+=a[i];
                if(sum1<k){
                    ok=false;
                    temp=i+1;
                    break;
                }
                else{
                    sum1-=k;
                }
            }
        }
        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<" "<<temp<<endl;
    }
    return 0;
}