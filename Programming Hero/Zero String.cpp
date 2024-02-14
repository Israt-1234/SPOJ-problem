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
        string s;cin>>s;
        int count0=0;
       int count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            count0++;
            else
            count1++;
        }
        if(count0==n)
        cout<<0<<endl;
        else if(count1==n)
        cout<<1<<endl;
        else if(count1<=count0)
        cout<<count1<<endl;
        else
        cout<<count0+1<<endl;
    }
    return 0;
}