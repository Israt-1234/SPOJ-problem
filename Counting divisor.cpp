#include<bits/stdc++.h>
using namespace std;
#define ll long long

void divisor(int x){
    set<int>s;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            int k=i;
           int l=x/i;
            
            s.insert(k);
            s.insert(l);
        }
    }
    cout<<s.size()<<'\n';
    s.clear();
    
}
int main()
{

    int n; cin>>n;
    while(n--){
    int x;cin>>x;
        divisor(x);
        // vector<ll>v;
        // for(auto x:s){
        //    // cout<<x;
        // }
        // v.assign(s.begin(),s.end());
        // cout<<v.size()<<'\n';
        // s.clear();
    }
    return 0;
}
/*  different wat but tle because int to ll

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
//set<ll>s;
int  divisor(ll x){
    ll count=0;
    for(ll i=1;i*i<=x;i++){
            if(x%i==0){
                if(x/i==i)
                count++;
                else
                count+=2;
            }
        }
    return count;
    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        ll x;cin>>x;
    int divisor1= divisor(x);
        cout<<divisor1<<'\n';
      //  vector<ll>v;
     //   for(auto x:s){
           // cout<<x;
     //   }
      //  v.assign(s.begin(),s.end());
     //   cout<<v.size()<<'\n';
      //  s.clear();
    }
    return 0;
}
*/

