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
        int n;cin>>n;
        string s;cin>>s;
        string k="";
        for(int i=0;i<n-1;i+=2){
            swap(s[i],s[i+1]);
        }
        for(int i=0;i<n;i++){
            int l=s[i]-'a';
           //cout<<l<<endl;
        //  char m='z'-l;
          // cout<<m<<endl;
            k+='z'-l;
        }
        cout<<k<<endl;
    }
    return 0;
}