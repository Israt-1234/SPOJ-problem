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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

       int sweap=0;
       string ans="YES";
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            sweap--;
            else
            sweap=k;
           
           if(sweap<0){
            ans="NO";
            break;
           }
        }
     cout<<ans<<endl;
       
    }
    return 0;
}
