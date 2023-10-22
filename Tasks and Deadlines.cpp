#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;cin>>n;
    int duration , deadline;
    int ans=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>duration>>deadline;
       ans+=deadline;
       v.push_back(duration);
    }
   // cout<<ans<<endl;
  sort(v.begin(), v.end());
  int finished=0;
  for(auto x:v){
       finished += x;
     //  cout<<finished<<endl;
     // cout<<x<<" "<<endl;
    ans-=finished;
   // cout<<ans<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
