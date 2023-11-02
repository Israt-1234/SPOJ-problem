#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N= 2e5+9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
     map<int, int>mp;
     for(int i=0;i<n;i++)
        mp[a[i]]++;

        int max_element1=INT_MIN;
     for(auto x:mp)
        max_element1=max(max_element1,x.second);

     if(max_element1!=INT_MIN)
        cout<<n-max_element1<<'\n';
     else
        cout<<n-1<<'\n';
    }
    return 0;
}
