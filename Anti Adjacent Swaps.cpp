/*........Hard work and consistency is the only way to success........ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
// int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n];
         for(int i=0;i<n;i++)
         cin>>s[i];
         if(n==2){
            if(s[0]<=s[1])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
         }
         else if(n==3){
            if(s[1]>max(s[2],s[0]) || s[1]<min(s[2],s[0]))
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
         }
         else
         cout<<"YES"<<endl;
    }
        return 0;
 }