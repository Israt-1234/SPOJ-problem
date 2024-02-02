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
        int tmax,Nmax,Nsum;
        cin>>tmax>>Nmax>>Nsum;
        ll sum=0;
        int ll sum1=0;
        for(int i=0;i<tmax;i++){
            sum+=Nmax*Nmax;
            sum1+=Nmax;
            if(sum1==Nsum)
            break;
            if(sum1>Nsum){
               ll k=sum1-Nsum;
               ll l=Nmax-k;
                sum+=l*l;
                sum-=Nmax*Nmax;
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}