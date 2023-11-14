#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n; int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
      //  for(int i=0;i<2*n;i++) cout<<a[i];
      vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
          v.push_back(make_pair(a[i],a[2*n-i-1]));
        }
        vector<int>k;
       for(auto [x,y]:v) {
       // cout<<x<<y<<endl;
      k.push_back(x+y);
       }
       int count=0;
       for(int i=0;i<k.size()-1;i++){
        if(k[i]!=k[i+1]){
            count++;
                break;
        }
       }
       if(count==1) cout<<"IMPERFECT"<<endl;
       else
        cout<<"PERFECT"<<endl;
    }
}
