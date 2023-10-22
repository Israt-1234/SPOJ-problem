#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n+1], pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
        pref[i]%=n;
        pref[i]=(pref[i]+n)%n;
    }
  long long ans=0;
  map<int, int>mp;
 mp[pref[0]]++;
  for(int i=1;i<=n;i++){
    ans+=mp[pref[i]];
    mp[pref[i]]++;

      }
      cout<<ans<<endl;
      return 0;
}
