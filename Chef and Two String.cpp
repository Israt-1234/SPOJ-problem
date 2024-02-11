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
        string s;cin>>s;
        string str;cin>>str;
        int maxi=0,mini=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=str[i] &&(s[i]!='?' && str[i]!='?')){
                mini++;
                maxi++;
            }
            else if(s[i]==str[i] && s[i]!='?')
            continue;
            else
            maxi++;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}