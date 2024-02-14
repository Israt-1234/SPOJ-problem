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
        int c;
        int t;cin>>t;
        string s;cin>>s;
        string ans="YES";
        if(t%2!=0)
        ans="NO";
        else{
        for(int i=0;i<t;i++){
            c=count(s.begin(), s.end(), s[i]);
            if(c%2!=0){
            ans="NO";
            break;
            }
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}