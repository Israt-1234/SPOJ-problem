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
        int count=0;
        int r,r1,r2,r3,r4;
        cin>>r>>r1>>r2>>r3>>r4;
        if(r==1)
        count++;
        if(r1==1)
        count++;
         if(r2==1)
        count++;
        if(r3==1)
        count++;
            if(r4==1)
        count++;
     if(count>=4)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
      
        
    }
    return 0;
}