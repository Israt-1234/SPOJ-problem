//TLE------------->>>>

/*........Hard work and consistency is the only way to success........ */
/*
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
   ll t; cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;cin>>s;
        vector<int>v;
        int len=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
            len++;
            else{
                v.push_back(len);
                len=1;
            }
        }
          v.push_back(len);

              cout << *max_element(v.begin(),v.end()) << " ";
         
       
        while(q--){
           char x;
            cin>>x;
            s+=x;
            //cout<<s<<endl;
            
            if(s[n]==s[n-1])
            v.back()++;
            else
            v.push_back(1);
                      
               cout << *max_element(v.begin(),v.end()) << " ";
               n++;
        }
       cout<<endl;
      
    }
    return 0;
}
*/
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
    ll f; cin>>f;
    while(f--){
        int n,q; cin>>n>>q;
        string s;cin>>s;
        int len=1;
        int maxl=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
            len++;
            else{
              maxl=max(maxl,len);
                len=1;
            }
        }
        maxl=max(maxl,len);
        cout<<maxl<<" ";
        while(q--){
            char x;cin>>x;
            s+=x;
            if(s[n]==s[n-1])
            len++;
            else
            len=1;

           maxl=max(maxl,len);
           cout<< maxl<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}