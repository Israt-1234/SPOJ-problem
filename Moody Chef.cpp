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
    int n;cin>>n;
    while(n--){
        int t,l,r;
        cin>>t>>l>>r;
        vector<int>a(t);
        int  inc=0, dic=0,happy=0;
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
     for(int i=0;i<t;i++){
        if(a[i]>=l and a[i]<=r)
        happy++;
        else
        happy--;
        
        inc=max(happy, inc);
        dic=min(happy, dic);
     }
        
      cout<<inc<<" "<<dic<<endl;
    }
    return 0;
}