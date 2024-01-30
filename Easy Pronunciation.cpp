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
        int count=0;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o'||s[i]=='i'||s[i]=='u')
            count=0;
            else{
                count++;
                if(count>=4){
                    ok=true;
                    break;
                }
            }
        }
        if(ok) cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
     
    return 0;
}
